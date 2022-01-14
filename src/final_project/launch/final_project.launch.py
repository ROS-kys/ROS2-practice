from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package = 'final_project',
            executable = 'control_server',
        ),
        Node(
            package = 'final_project',
            executable = 'control_subscriber_client',
        )
    ])
