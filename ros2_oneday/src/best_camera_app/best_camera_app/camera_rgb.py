from best_camera_app_msgs.srv import ApplyRGBService

import rclpy as rp
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np


class CameraBlurred(Node):
    def __init__(self):
        super().__init__('camera_rgb')
        self.server = self.create_service(ApplyRGBService, 'camera_rgb', self.callback_service)
        self.camera_subs = self.create_subscription(
            Image,
            '/camera',
            self.img_callback,
            10
        )

        self.publisher = self.create_publisher(
                                                Image,
                                                '/camera_rgb_changed',
                                                10)
        
        self.bridge = CvBridge()

        self.red = 1.0
        self.green = 1.0
        self.blue = 1.0

    def callback_service(self, request, response):

        print(request)

        self.red = request.r
        self.green = request.g
        self.blue = request.b

        response.result = "rgb applied"
            
        print(response)
        
        return response

    def img_callback(self,msg):
        
        self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")

        red_ratio = np.clip(self.red, 0, 2)
        green_ratio = np.clip(self.green, 0, 2)
        blue_ratio = np.clip(self.blue, 0, 2)

        # 이미지에 RGB 비율 적용
        self.cv_image[:, :, 0] = np.clip(self.cv_image[:, :, 0] * blue_ratio, 0, 255)  # Blue 채널
        self.cv_image[:, :, 1] = np.clip(self.cv_image[:, :, 1] * green_ratio, 0, 255)  # Green 채널
        self.cv_image[:, :, 2] = np.clip(self.cv_image[:, :, 2] * red_ratio, 0, 255)  # Red 채널

        bgr2rgb_img = cv2.cvtColor(self.cv_image, cv2.COLOR_BGR2RGB)
        final_img = self.bridge.cv2_to_imgmsg(bgr2rgb_img, encoding="rgb8")
        self.publisher.publish(final_img)

        
        cv2.waitKey(1)
        

def main(args=None):
    rp.init(args=args)
    capture = CameraBlurred()
    rp.spin(capture)
    rp.shutdown()


if __name__ == '__main__':
    main()