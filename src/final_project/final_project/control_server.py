import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from math import cos, sin, atan2, sqrt
import matplotlib.pyplot as plt  
from mpl_toolkits.mplot3d import Axes3D
from project_interface.action import Controller

fig=plt.figure(figsize=(8,8))

l1 = 24.365
l2 = 21.325 + 8.535
x_axis = 0.0
y_axis = 0.0
z_axis = l1 + l2 - 1

class ControlActionServer(Node):

    def __init__(self):
        super().__init__('control_server')
        self._action_server = ActionServer(
            self,
            Controller,
            'action_control',
            self.execute_callback
        )

    def execute_callback(self, goal_handle):
        feedback_msg = Controller.Feedback()

        feedback_msg.status = str(self.calculate(goal_handle.request.goal_point)[3])

        goal_handle.publish_feedback(feedback_msg)

        goal_handle.succeed()

        result = Controller.Result()
        result.result = str(self.calculate(goal_handle.request.goal_point)[0:3]) 
        return result

    def calculate(self, val):
        global x_axis
        global y_axis
        global z_axis

        x = int(val[val.find('x') + 1 : val.find('y')])
        y = int(val[val.find('y') + 1 : val.find('z')])
        z = int(val[val.find('z') + 1:])

        x_axis += x
        y_axis += y
        z_axis += z

        if x_axis**2.0 + y_axis**2.0 + z_axis**2.0 >= (l1 + l2 - 0.1)**2.0:
            grad_1 = atan2(z_axis, sqrt(x_axis**2.0 + y_axis**2.0))
            grad_2 = atan2(y_axis, x_axis)
            x_axis = (l1 + l2 - 0.1)*cos(grad_1)*cos(grad_2)
            y_axis = (l1 + l2 - 0.1)*cos(grad_1)*sin(grad_2)
            z_axis = (l1 + l2 - 0.1)*sin(grad_1)   
            theta = self.get_theta(x_axis, y_axis, z_axis)
            theta_1 = theta[0]
            theta_2 = theta[1] 
            theta_3 = theta[2]
            status = 'Out of range'

        elif x_axis**2.0 + y_axis**2.0 + z_axis**2.0 <= (l2-l1 +0.1)**2.0:
            grad_1 = atan2(z_axis, sqrt(x_axis**2.0 + y_axis**2.0))
            grad_2 = atan2(y_axis, x_axis)
            x_axis = (l2-l1 +0.1)*cos(grad_1)*cos(grad_2)
            y_axis = (l2-l1 +0.1)*cos(grad_1)*sin(grad_2)
            z_axis = (l2-l1 +0.1)*sin(grad_1)    
            theta = self.get_theta(x_axis, y_axis, z_axis)
            theta_1 = theta[0]
            theta_2 = theta[1] 
            theta_3 = theta[2]
            status = 'Out of range'

        else:
            theta = self.get_theta(x_axis, y_axis, z_axis)
            theta_1 = theta[0]
            theta_2 = theta[1]
            theta_3 = theta[2]
            status = 'Good'

        theta_1 = theta[0]
        theta_2 = theta[1]
        theta_3 = theta[2]

        x_1 = l1*cos(theta_2)*cos(theta_1)
        x_2 = (l1*cos(theta_2) + l2*cos(theta_2+theta_3))*cos(theta_1)
        y_1 = l1*cos(theta_2)*sin(theta_1)
        y_2 = (l1*cos(theta_2) + l2*cos(theta_2+theta_3))*sin(theta_1)
        z_1 = l1*sin(theta_2)
        z_2 = l2*sin(theta_2+theta_3) + l1*sin(theta_2)

        x_grap = [0.0, 0., x_1, x_2]
        y_grap = [0.0, 0., y_1, y_2]
        z_grap = [0.0, 15.19, 15.19+z_1, 15.19+z_2]

        plt.clf()
        
        ax = fig.add_subplot(111, projection='3d')
        ax.set_xlabel("X")
        ax.set_ylabel("Y")
        ax.set_zlabel("Z")
        ax.set_xlim(-55, 55)
        ax.set_ylim(-55, 55)
        ax.set_zlim(-70, 70)
        ax.view_init(elev=10, azim=-50)
        ax.dist=6
        ax.plot(x_grap, y_grap, z_grap, 'r', marker='o')
        plt.draw() 
        plt.pause(0.01)

        result = [x_2, y_2, 15.19+z_2, status]
        return result

    def get_theta(self, x, y, z):
        D = (x**2.0 + y**2.0 + z**2.0 - l1**2 - l2**2)/(2.0*l1*l2)
        theta_3 = atan2(sqrt(1.0 - D**2.0), D)
        theta_2 = atan2(z, sqrt(x**2.0 + y**2.0)) - atan2(l2*sin(theta_3), l1+l2*cos(theta_3))
        theta_1 = atan2(y,x)

        result = [theta_1, theta_2, theta_3]
        return result    

def main(args=None):
    rclpy.init(args=args)

    control_action_server = ControlActionServer()

    rclpy.spin(control_action_server) 

if __name__ == '__main__':
    main()