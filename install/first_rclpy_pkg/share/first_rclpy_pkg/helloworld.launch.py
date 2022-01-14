from launch import LaunchDescription
from launch_ros.actions import Node

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package = 'first_rclpy_pkg',
            executable = 'helloworld_publisher',
            name = 'helloworld_publisher',
            output = 'screen'
        ),
        Node(
            package = 'first_rclpy_pkg',
            executable = 'helloworld_subscriber',
            name = 'helloworld_subscriber',
            output = 'screen'
        ),
    ])