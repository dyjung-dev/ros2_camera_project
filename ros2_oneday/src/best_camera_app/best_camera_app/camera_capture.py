from best_camera_app_msgs.srv import CaptureService

import rclpy as rp
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import datetime

import cv2


class CameraCapture(Node):
    def __init__(self):
        super().__init__('camera_capture')
        self.server = self.create_service(CaptureService, 'camera_capture', self.callback_service)
        self.camera_subs = self.create_subscription(
            Image,
            '/camera',
            self.img_callback,
            10
        )

        self.bridge = CvBridge()
        self.declare_parameter('capture_save_path', "/home/dyjung/ros2_oneday/")
        save_path = self.get_parameter('capture_save_path')

        self.save_path_for_jpg = save_path.value

    def callback_service(self, request, response):
        
        print(request.capture_true)

        if request.capture_true == True:
            self.now = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
            filename = self.now + ".jpg"

            cv2.imwrite(self.save_path_for_jpg + filename, self.cv_image)
            response.result_path = self.save_path_for_jpg + filename
        else:
            response.result_path = ""
        
        print(response)

        return response

    def img_callback(self,msg):
        self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        cv2.waitKey(1)
        

def main(args=None):
    rp.init(args=args)
    capture = CameraCapture()
    rp.spin(capture)
    rp.shutdown()


if __name__ == '__main__':
    main()