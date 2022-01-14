from setuptools import setup

package_name = 'fibonacci_rclpy_action_pkg'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yongsung',
    maintainer_email='dydtjd1015@kumoh.ac.kr',
    description='ROS2 rclpy action package for Fibonacci sequence',
    license='Apache 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'fibonacci_action_server = fibonacci_rclpy_action_pkg.fibonacci_action_server:main',
            'fibonacci_action_client = fibonacci_rclpy_action_pkg.fibonacci_action_client:main',
        ],
    },
)
