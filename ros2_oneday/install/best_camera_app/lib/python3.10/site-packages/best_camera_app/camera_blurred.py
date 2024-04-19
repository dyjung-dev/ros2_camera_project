from best_camera_app_msgs.srv import ApplyBlurrService

import rclpy as rp
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2


class CameraBlurred(Node):
    def __init__(self):
        super().__init__('camera_blurred')
        self.server = self.create_service(ApplyBlurrService, 'camera_blurred', self.callback_service)
        self.camera_subs = self.create_subscription(
            Image,
            '/camera',
            self.img_callback,
            10
        )

        self.publisher = self.create_publisher(
                                                Image,
                                                '/camera_blurred',
                                                10)
        
        self.bridge = CvBridge()
        self.blurr_flag =0

    def callback_service(self, request, response):

        if request.apply_blurr_true_false  == True:
            self.blurr_flag =1
            response.result = "blurr on"

        elif request.apply_blurr_true_false == False:
            self.blurr_flag =0
            response.result = "blurr off"
            
        print(response)
        
        return response

    def img_callback(self,msg):
        
        if self.blurr_flag == 1:

            self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
            blur_img = cv2.GaussianBlur(self.cv_image, (7,7), 0)
            cvt_img = cv2.cvtColor(blur_img, cv2.COLOR_BGR2RGB)
            final_img = self.bridge.cv2_to_imgmsg(cvt_img, encoding="rgb8")
            self.publisher.publish(final_img)

        else:
            self.publisher.publish(msg)

        
        cv2.waitKey(1)
        

def main(args=None):
    rp.init(args=args)
    capture = CameraBlurred()
    rp.spin(capture)
    rp.shutdown()


if __name__ == '__main__':
    main()