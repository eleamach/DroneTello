from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from tello_interfaces.msg import Coord

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.coordqr_publisher = self.create_publisher(Coord, 'coordqr', 10)
        self.joysub = self.create_subscription(
            Image,
            'image_raw',
            self.image_callback,
            10)

    def image_callback(self, msg):
        bridge = CvBridge()
        frame = bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        qr_decoder = cv2.QRCodeDetector()
        data, bbox, rectified_image = qr_decoder.detectAndDecode(frame)
        if len(data) > 0:
            print("Decoded Data : {}".format(data))
            self.display(frame, bbox)
            rectified_image = np.uint8(rectified_image)
            cv2.imshow("Rectified QRCode", rectified_image)
        else:
            print("QR Code not detected")
            cv2.imshow("Results", frame)
        cv2.waitKey(1)

    def display(self, img, bbox):
        n = len(bbox)
        if n > 0:
            pt1 = int(bbox[0][0][0]), int(bbox[0][0][1])
            pt2 = int(bbox[0][2][0]), int(bbox[0][2][1])
            center_x = (pt1[0] + pt2[0]) // 2
            center_y = (pt1[1] + pt2[1]) // 2
            center = (center_x, center_y)
            print("Coordonées : %d", center)

            coord_msg = Coord()
            coord_msg.coordx = center_x
            coord_msg.coordy = center_y
            self.coordqr_publisher.publish(coord_msg)

            cv2.circle(img, center, 5, (255, 255, 255), -1)
            cv2.circle(img, (500,380), 5, (255, 0, 255), -1)
        
            color = (255, 0, 0)
            cv2.rectangle(img, pt1, pt2, color)
            cv2.imshow("Results", img)


def main(args=None):
    rclpy.init(args=args)
    minimal_subscriber = MinimalSubscriber()
    rclpy.spin(minimal_subscriber)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
