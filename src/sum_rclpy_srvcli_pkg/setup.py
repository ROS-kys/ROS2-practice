from setuptools import setup

package_name = 'sum_rclpy_srvcli_pkg'

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
    description='ROS2 rclpy service client package for sum',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sum_service = sum_rclpy_srvcli_pkg.sum_service:main',
            'sum_client = sum_rclpy_srvcli_pkg.sum_client:main',
        ],
    },
)
