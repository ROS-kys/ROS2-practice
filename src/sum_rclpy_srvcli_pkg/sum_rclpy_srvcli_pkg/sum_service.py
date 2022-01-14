import rclpy
from rclpy.node import Node

#from example_interfaces.srv import AddTwoInts
from my_interface_example.srv import AddThreeInts

class SumService(Node):

    def __init__(self):
        super().__init__('sum_service')
        #self.srv = self.create_service(AddTwoInts, 'add_two_ints', self.add_two_ints_callback)
        self.srv = self.create_service(AddThreeInts, 'add_three_ints', self.add_three_ints_callback)

    #def add_two_ints_callback(self, request, response):
    #    response.sum = request.a + request.b
    #    self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))
    def add_three_ints_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        self.get_logger().info('Incoming request\na: %d b: %d c: %d' % (request.a, request.b, request.c))
        return response

def main(args=None):
    rclpy.init(args=args)

    sum_service = SumService()

    try:
        rclpy.spin(sum_service)
    except KeyboardInterrupt:
        sum_service.get_logger().info('This node is finished by keyboard interrupt')
    finally:
        sum_service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()