#include <ros/ros.h> // header file for basic ROS libraries
#include <geometry_msgs/Twist.h> // For geometry_msgs::Twist
#include <ros/console.h> 

}

int main(int argc, char **argv)
{
	ros::init(argc, argv, "example_node"); //Initialize the ROS system, create 	   the node name of example node
	ros::NodeHandle nh;
		
	ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("chatter" , 		1000); //Create a publisher object and publish on the topic chatter
	ros::Rate rate(10); // running at 10Hz

	ros::Subscriber sub = nh.subscribe("cmd_vel", 1000, 		
	&twistMessageReceived);	// last element is callback function
	
	ros::Rate rate(2) // Loop at 2Hz until the node is shutdown
	
	while (ros::ok()) //Create and fill in the message.
	{
		geometry_msgs::Twist msg;
		msg.linear.x = cmd_vel.linear.x
	}
	
	pub.publish(msg); //Publishing the message
	ROS_INFO_STREAM("Hello ROS");
	ros::spinOnce();
	rate.sleep() //Wait until it's time for another iteration
}
