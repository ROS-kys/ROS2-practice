import rclpy
from rclpy import action
from rclpy.node import Node
from rclpy.action import ActionClient
from std_msgs.msg import String

from project_interface.action import Controller

class ControlSubscriber(Node):

    def __init__(self):
        super().__init__('control_subscriber_client')
        self.control_subsriber = self.create_subscription(
            String,
            'control',
            self.send_goal,
            10
        )
        self._action_client = ActionClient(self, Controller, 'action_control')      
        self.declare_parameter('param', 'x0y0z0')

    def param_callback(self, msg):
        if msg.data == 'a':
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x2y0z0'
            )
        elif msg.data == 'd':
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x-2y0z0'
            )
        elif msg.data == 'w':
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x0y2z0'
            )
        elif msg.data == 's':
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x0y-2z0'
            )
        elif msg.data == 'u':
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x0y0z2'
            )
        elif msg.data == 'i':
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x0y0z-2'
            )
        else:
            add_co = rclpy.parameter.Parameter(
                'param',
                rclpy.Parameter.Type.STRING,
                'x0y0z0'
            )

        all_new_parameters = [add_co]
        self.set_parameters(all_new_parameters)

    def send_goal(self, msg):
        self.param_callback(msg)
        coordinate = self.get_parameter('param').get_parameter_value().string_value
        goal_msg = Controller.Goal()
        goal_msg.goal_point = coordinate
        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)
    
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('End point: {0}'.format(result.result))
        

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Status: {0}'.format(feedback.status))

def main(args=None):
    rclpy.init(args=args)
    node = ControlSubscriber()
    
    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
