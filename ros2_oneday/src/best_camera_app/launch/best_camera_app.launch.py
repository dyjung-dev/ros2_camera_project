from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    
    cap_para_file_path = './params/cap_parameters.yaml'
    rec_para_file_path = './params/rec_parameters.yaml'

    return LaunchDescription(
        [
            Node(
                namespace= "best_camera_app", package = 'best_camera_app',
                executable='img_publisher', output = 'screen'),
            
            Node(
                namespace= "best_camera_app", package = 'best_camera_app',
                executable='camera_capture', output = 'screen',
                parameters=[cap_para_file_path]),

            Node(
                namespace= "best_camera_app", package = 'best_camera_app',
                executable='camera_record', output = 'screen',
                parameters=[rec_para_file_path]),
            
            Node(
                namespace= "best_camera_app", package = 'best_camera_app',
                executable='camera_blurred', output = 'screen'),

            Node(
                namespace= "best_camera_app", package = 'best_camera_app',
                executable='camera_rgb', output = 'screen'),

            
        ]
    )