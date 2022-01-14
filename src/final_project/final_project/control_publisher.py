import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from final_project.GetChar import GetChar

class ControlPublisher(Node):

    def __init__(self):
        super().__init__('control_publisher')
        self.control_publisher = self.create_publisher(String, 'control', 10)
        self.timer = self.create_timer(0.3, self.publish_control_msg)
        print('"a" : -x')
        print('"d" : +x')
        print('"s" : -y')
        print('"w" : +y')
        print('"u" : +z')
        print('"i" : -z')
        
    def publish_control_msg(self):
        msg = String()
        data = GetChar().getch()
        msg.data = data
        self.control_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = ControlPublisher()

    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()