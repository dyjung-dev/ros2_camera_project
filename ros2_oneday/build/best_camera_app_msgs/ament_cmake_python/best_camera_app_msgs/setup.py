from setuptools import find_packages
from setuptools import setup

setup(
    name='best_camera_app_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('best_camera_app_msgs', 'best_camera_app_msgs.*')),
)
