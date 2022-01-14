import os
from glob import glob

from setuptools import setup

package_name = 'first_rclpy_pkg'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yongsung',
    maintainer_email='dydtjd1015@kumoh.ac.kr',
    description='ROS2 rclpy basic package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'helloworld_publisher = first_rclpy_pkg.helloworld_publisher:main',
            'helloworld_subscriber = first_rclpy_pkg.helloworld_subscriber:main'
        ],
    },
)
