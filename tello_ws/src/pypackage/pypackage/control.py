import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from std_msgs.msg import Empty
from time import sleep
from geometry_msgs.msg import Twist
from tello_interfaces.srv import DroneMode



class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')

        self.cli = self.create_client(DroneMode, 'mode_drone')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = DroneMode.Request()    
        self.rep = DroneMode.Response()
        self.takeoffvalue = False
        self.takeoff_publisher = self.create_publisher(Empty, 'takeoff', 10)
        self.land_publisher = self.create_publisher(Empty, 'land', 10)
        self.emergency_publisher = self.create_publisher(Empty, 'emergency', 10)
        self.axis_publisher = self.create_publisher(Twist, 'control', 10)

        self.joysub = self.create_subscription(
            Joy,
            'joy',
            self.joy_callback,
            10)
        self.takeoffsub = self.create_subscription(
            Empty,
            'takeoff',
            self.takeoff_callback,
            10)
        self.landsub = self.create_subscription(
            Empty,
            'land',
            self.land_callback,
            10)
        self.joysub  # prevent unused variable warning
        self.takeoffsub
        self.landsub


    def takeoff_callback(self, msg):
        self.takeoffvalue = True

    def land_callback(self, msg):
        self.takeoffvalue = False
  
    def joy_callback(self, msg):
        takeoff_button = msg.buttons[0]
        land_button = msg.buttons[2]
        emergency_button = msg.buttons[1]
        mode_button1 = msg.axes[7]
        mode_button2 = msg.axes[6]

        twist_msg = Twist()
        twist_msg.linear.x = msg.axes[0]*(-100) 
        twist_msg.linear.y = msg.axes[1]*100
        twist_msg.linear.z = msg.axes[4]*100
        twist_msg.angular.x = 0.0
        twist_msg.angular.y = 0.0
        twist_msg.angular.z = msg.axes[3]*(-100)

        self.axis_publisher.publish(twist_msg)


        if takeoff_button == 1 and self.takeoffvalue == False:
            self.takeoff_publisher.publish(Empty())
            self.get_logger().info('Buttons: "%s"' % (takeoff_button))
        if land_button == 1 and self.takeoffvalue == True:
            self.land_publisher.publish(Empty())
            self.get_logger().info('Buttons: "%s"' % (land_button))
        if emergency_button == 1 and self.takeoffvalue == True:
            self.emergency_publisher.publish(Empty())
            self.get_logger().info('Buttons: "%s"' % (emergency_button))
        if mode_button1 == 1 : # Normal mode
            self.send_request(1)
            self.get_logger().info('Je me met en mode normal\n')
        if mode_button1 == -1 : # Surveillance mode
            self.send_request(4)
            self.get_logger().info('Je me met en mode surveillance\n')
        if mode_button2 == 1 : # Spielberg mode
            self.send_request(2)
            self.get_logger().info('Je me met en mode Spielberg\n')
        if mode_button2 == -1 : # QRCODE mode
            self.send_request(3)
            self.get_logger().info('Je me met en mode QRCODE\n')


    def send_request(self, mode):
        self.req.a = mode                                    # CHANGE
        self.future = self.cli.call_async(self.req)


def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    

    rclpy.spin(minimal_subscriber)
    minimal_subscriber.destroy_node()    
    rclpy.shutdown()

if __name__ == '__main__':
    main()