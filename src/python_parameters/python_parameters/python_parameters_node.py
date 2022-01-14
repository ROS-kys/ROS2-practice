import rclpy
from rclpy.node import Node
from rclpy.exceptions import ParameterNotDeclaredException

class MinimalParam(Node):
    def __init__(self):
        super().__init__('minimal_param_node')
        timer_period = 2 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.declare_parameter('my_parameter', 'world')
        self.declare_parameter('num_parameter', 1)

    def timer_callback(self):
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value
        num_param = self.get_parameter('num_parameter').get_parameter_value().integer_value

        self.get_logger().info('Hello %s!, Num: %d, ' % (my_param, num_param))

        my_new_param = rclpy.parameter.Parameter(
            'my_parameter',
            rclpy.Parameter.Type.STRING,
            'world'
        )
        new_num_param = rclpy.parameter.Parameter(
            'num_parameter',
            rclpy.Parameter.Type.INTEGER,
            1
        )
        all_new_parameters = [my_new_param, new_num_param]
        self.set_parameters(all_new_parameters)

def main():
    rclpy.init()
    node = MinimalParam()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('This node is finished by keyboard interrupt')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()