from setuptools import find_packages, setup
import os
import glob

package_name = 'best_camera_app'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob.glob(os.path.join('launch', '*.launch.py'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dyjung',
    maintainer_email='dyjung.dev@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'img_publisher = best_camera_app.img_publisher:main',
            'camera_capture = best_camera_app.camera_capture:main',
            'camera_record = best_camera_app.camera_record:main',
            'camera_blurred = best_camera_app.camera_blurred:main',
            'camera_rgb = best_camera_app.camera_rgb:main'
        ],
    },
)
