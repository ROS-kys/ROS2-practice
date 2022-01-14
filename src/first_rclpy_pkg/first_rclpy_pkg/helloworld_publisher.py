import rclpy
from rclpy.node import Node
#from std_msgs.msg import String
from my_interface_example.msg import Num

class HelloworldPublisher(Node):

    def __init__(self):
        super().__init__('helloworld_publisher')
        #self.helloworld_publisher = self.create_publisher(String, 'helloworld', 10)
        self.helloworld_publisher = self.create_publisher(Num, 'num_topic', 10)
        self.timer = self.create_timer(1, self.publish_helloworld_msg)
        self.count = 0

    def publish_helloworld_msg(self):
        #msg = String()
        msg = Num()
        #msg.data = 'Hello World: {0}'.format(self.count)
        msg.num = self.count
        self.helloworld_publisher.publish(msg)
        #self.get_logger().info('Published message: {0}'.format(msg.data))
        self.get_logger().info('Pulished mesage: {0}'.format(msg.num))
        self.count += 1

def main(args = None):
    rclpy.init(args = args)
    node = HelloworldPublisher()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()