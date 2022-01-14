import rclpy
from rclpy.node import Node
#from std_msgs.msg import String
from my_interface_example.msg import Num

class HelloworldSubscriber(Node):

    def __init__(self):
        super().__init__('Helloworld_subscriber')
        #self.helloworld_subscriber = self.create_subscription(
        #    String,
        #   'helloworld',
        #    self.subscribe_topic_message,
        #    10
        #)
        self.helloworld_subscriber = self.create_subscription(
            Num,
            'num_topic',
            self.subscribe_topic_message,
            10
        )
    
    def subscribe_topic_message(self, msg):
        #self.get_logger().info('Received message: {0}'.format(msg.data))
        self.get_logger().info('Published message: {0}'.format(msg.num))
        
def main(args = None):
    rclpy.init(args=args)
    node = HelloworldSubscriber()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()