from best_camera_app_msgs.srv import VideoRecordService

import rclpy as rp
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import datetime
import cv2


class CameraRecord(Node):
    def __init__(self):
        super().__init__('camera_record')
        self.server = self.create_service(VideoRecordService, 'camera_record', self.callback_service)
        self.camera_subs = self.create_subscription(
            Image,
            '/camera',
            self.img_callback,
            10
        )

        self.bridge = CvBridge()
        self.record_flag = 0

        self.declare_parameter('record_save_path', "/home/dyjung/ros2_oneday/")
        save_path = self.get_parameter('record_save_path')

        self.save_path_for_avi = save_path.value

    def callback_service(self, request, response):
        print('Request : ', request.video_start_end)

        if request.video_start_end  == "start":

            self.now = datetime.datetime.now().strftime("%Y%m%d_%H%M%S")
            self.filename = self.now + ".avi"
            self.fourcc = cv2.VideoWriter_fourcc(*"XVID")
            
            h,w,ch = self.cv_image.shape
            
            self.writer = cv2.VideoWriter(self.save_path_for_avi + self.filename, self.fourcc, 20.0, (w,h))

            response.result_path = "record start"
            self.record_flag = 1

        
        elif request.video_start_end == "end" :
            self.writer.release()
            self.record_flag = 0
            response.result_path = "record end :" + self.save_path_for_avi + self.filename
        
        print(response)

        return response

    def img_callback(self,msg):
        self.cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="bgr8")
        if self.record_flag == 1:
            self.writer.write(self.cv_image)
        else:
            pass
        cv2.waitKey(1)
        

def main(args=None):
    rp.init(args=args)
    capture = CameraRecord()
    rp.spin(capture)
    rp.shutdown()


if __name__ == '__main__':
    main()