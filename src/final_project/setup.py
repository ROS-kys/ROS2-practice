import os
from glob import glob

from setuptools import setup

package_name = 'final_project'

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
    maintainer='ys',
    maintainer_email='dydtjd1015@kumoh.ac.kr',
    description='ROS2 final_project',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'control_publisher = final_project.control_publisher:main',
            'control_subscriber_client = final_project.control_subscriber_client:main',
            'control_server = final_project.control_server:main',
        ],
    },
)
