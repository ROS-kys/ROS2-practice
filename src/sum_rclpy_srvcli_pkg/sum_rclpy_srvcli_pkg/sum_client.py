import sys

import rclpy
from rclpy.node import Node

#from example_interfaces.srv import AddTwoInts
from my_interface_example.srv import AddThreeInts

class SumClientAsync(Node):

    def __init__(self):
        super().__init__('sum_client_async')
        #self.cli = self.create_client(AddTwoInts, 'add_two_ints')
        self.cli = self.create_client(AddThreeInts, 'add_three_ints')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        #self.req = AddTwoInts.Request()
        self.req = AddThreeInts.Request()
    
    def send_request(self):
        self.req.a = int(sys.argv[1])
        self.req.b = int(sys.argv[2])
        self.req.c = int(sys.argv[3])
        self.future = self.cli.call_async(self.req)

def main(args=None):
    rclpy.init(args=args)

    sum_client = SumClientAsync()
    sum_client.send_request()

    while rclpy.ok():
        rclpy.spin_once(sum_client)
        if sum_client.future.done():
            try:
                response = sum_client.future.result()
            except Exception as e:
                sum_client.get_logger().info('Service call failed %r' % (e,))
            else:
                sum_client.get_logger().info('Result of add_two_ints: for %d + %d + %d = %d' % (sum_client.req.a, sum_client.req.b, sum_client.req.c, response.sum))
            break
    
    sum_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()