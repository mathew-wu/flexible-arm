#include <ros/ros.h> // header file for basic ROS libraries
#include <geometry_msgs/Twist.h> // For geometry_msgs::Twist
#include <ros/console.h> //alows for logging statements

void twistMessageReceived(const geometry_msgs::Twist::ConstPtr& msg) { //callback function that gets called whenever new information has arrived in the chatter topic.
{
	ROS_INFO("I hear you"); //notifies if you received a new message
}

int main(int argc, char **argv)
{
ros::init(argc, argv, "motor_driver_node");
ros::NodeHandle n;
ros::subscriber sub = n.subscribe("chatter",1000,twistMessageReceived); // subscribes to the chatter topic and calls the callback function.
ros::spin();

return 0;
}
