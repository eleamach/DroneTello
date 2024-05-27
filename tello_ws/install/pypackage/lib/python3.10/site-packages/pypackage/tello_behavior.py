import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Empty
from tello_interfaces.srv import DroneMode
from std_msgs.msg import String
from tello_interfaces.msg import Coord

class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.subscription = self.create_subscription(
            Twist,
            'secure_cmd',
            self.twist_callback,
            10)
        self.subscriptionBarCode = self.create_subscription(
            String,
            'barcode',
            self.barcodecallback,
            10)
        self.subscriptionCoordQr= self.create_subscription(
            Coord,
            'coordqr',
            self.coordqrcallback,
            10)
        self.axis_publisher = self.create_publisher(Twist, 'control', 10)
        self.srv = self.create_service(DroneMode, 'mode_drone', self.mode_drone)       # CHANGE*
        self.mode=1
        self.qrcodeMode=''
        self.land_publisher = self.create_publisher(Empty, 'land', 10)
        self.takeoffvalue = False
        self.coordqrx = 0
        self.coordqry = 0
        self.takeoffsub = self.create_subscription(
            Empty,
            'takeoff',
            self.takeoff_callbck,
            10)
        self.landsub = self.create_subscription(
            Empty,
            'land',
            self.land_callback,
            10)
        self.takeoffsub  # prevent unused variable warning
        self.landsub

    def takeoff_callbck(self, msg):
        self.takeoffvalue = True
    
    def coordqrcallback(self, msg):
        self.coordqrx = msg.coordx
        self.coordqry = msg.coordy
        self.get_logger().info("coordonée en x : %d, coordonées en y : %d"% (self.coordqrx, self.coordqry))

    def land_callback(self, msg):
        self.takeoffvalue = False
        self.get_logger().info('land receive \n')
  
    def mode_drone(self, request, response):
        self.get_logger().info('Incoming request : %d, %s' % (request.a, response.reussi))  # CHANGE
        self.mode=request.a    
        response.reussi = True                               
        return response
    
    def barcodecallback(self, msg):
        self.get_logger().info('QRCODE : %s' % (msg.data)) 
        self.qrcodeMode=msg.data

    
    def twist_callback(self, msg):
        self.get_logger().info('Recu coordonéees')
        match self.mode:
            case 1:
                # on est normal
                self.get_logger().info('Je me met en mode normal\n')
                self.axis_publisher.publish(msg)
            case 2:       
                # on est en mode Spielberg
                self.get_logger().info('Je me met en mode Spielberg\n') 
                twist_msg = Twist()
                twist_msg.linear.x = 20.0
                twist_msg.linear.y = 0.0
                twist_msg.linear.z = 0.0
                twist_msg.angular.x = 0.0
                twist_msg.angular.y = 0.0
                twist_msg.angular.z = 0.0
                twist_msg.angular.z = -50.0
                self.axis_publisher.publish(twist_msg)

            case 3:
                # on est qrcode
                self.get_logger().info('Je me met en mode QRCODE\n')
                match self.qrcodeMode:
                    case 'start':
                        #Translation sur xwist_msg = Twist()
                        twist_msg = Twist()
                        twist_msg.linear.x = 10.0
                        twist_msg.linear.y = 0.0
                        twist_msg.linear.z = 0.0
                        twist_msg.angular.x = 0.0
                        twist_msg.angular.y = 0.0
                        twist_msg.angular.z = 0.0
                        twist_msg.angular.z = 0.0
                        self.axis_publisher.publish(twist_msg)
                    case 'finish':
                        #stop everything
                        twist_msg = Twist()
                        twist_msg.linear.x = 0.0
                        twist_msg.linear.y = 0.0
                        twist_msg.linear.z = 0.0
                        twist_msg.angular.x = 0.0
                        twist_msg.angular.y = 0.0
                        twist_msg.angular.z = 0.0
                        twist_msg.angular.z = 0.0
                        self.axis_publisher.publish(twist_msg)
                    case 'stop':
                        #stop translation sur x
                        twist_msg = Twist()
                        twist_msg.linear.x = 0.0
                        twist_msg.linear.y = 0.0
                        twist_msg.linear.z = 0.0
                        twist_msg.angular.x = 0.0
                        twist_msg.angular.y = 0.0
                        twist_msg.angular.z = 0.0
                        twist_msg.angular.z = 0.0
                        self.axis_publisher.publish(twist_msg)
                    case 'drop_area':
                        #stop translation sur x
                       self.get_logger().info('land\n')
                       if self.takeoffvalue == True: 
                            self.get_logger().info('LAND\n')
                            self.land_publisher.publish(Empty())
                            self.takeoffvalue = False
                    case 'red_block':
                        #stop translation sur x
                        self.get_logger().info('Je te suit\n')
                        if (self.coordqrx<500):
                            #on va a gauche
                            if (self.coordqry<500):
                                #on monte
                                twist_msg = Twist()
                                twist_msg.linear.x = -15.0
                                twist_msg.linear.y = 0.0
                                twist_msg.linear.z = 15.0
                                twist_msg.angular.x = 0.0
                                twist_msg.angular.y = 0.0
                                twist_msg.angular.z = 0.0
                                twist_msg.angular.z = 0.0
                                self.axis_publisher.publish(twist_msg)
                            else:
                                # on descend
                                twist_msg = Twist()
                                twist_msg.linear.x = -15.0
                                twist_msg.linear.y = 0.0
                                twist_msg.linear.z = -15.0
                                twist_msg.angular.x = 0.0
                                twist_msg.angular.y = 0.0
                                twist_msg.angular.z = 0.0
                                twist_msg.angular.z = 0.0
                                self.axis_publisher.publish(twist_msg)
                        else:
                            # on va a droite
                            if (self.coordqry<500):
                                #on monte
                                twist_msg = Twist()
                                twist_msg.linear.x = 15.0
                                twist_msg.linear.y = 0.0
                                twist_msg.linear.z = 15.0
                                twist_msg.angular.x = 0.0
                                twist_msg.angular.y = 0.0
                                twist_msg.angular.z = 0.0
                                twist_msg.angular.z = 0.0
                                self.axis_publisher.publish(twist_msg)
                            else:
                                # on descend
                                twist_msg = Twist()
                                twist_msg.linear.x = 15.0
                                twist_msg.linear.y = 0.0
                                twist_msg.linear.z = -15.0
                                twist_msg.angular.x = 0.0
                                twist_msg.angular.y = 0.0
                                twist_msg.angular.z = 0.0
                                twist_msg.angular.z = 0.0
                                self.axis_publisher.publish(twist_msg)
                        
            case 4:
                # on est mode surveillance
                self.get_logger().info('Je me met en mode surveillance\n')
                twist_msg = Twist()
                twist_msg.linear.x = 0.0
                twist_msg.linear.y = 0.0
                twist_msg.linear.z = 0.0
                twist_msg.angular.x = 0.0
                twist_msg.angular.y = 0.0
                twist_msg.angular.z = 0.0
                twist_msg.angular.z = 100.0
                self.axis_publisher.publish(twist_msg)


def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()