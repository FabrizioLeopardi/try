#include "my_rosplan_interface/my_action.h"
#include "geometry_msgs/Twist.h"
#include <unistd.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>
#include <assignment_2_2022/PlanningAction.h>
#include <my_rosplan_interface/Marker.h>

ros::Publisher pub;
ros::Subscriber sub;
int current_marker_goal = 0;
int ids[4];
int current=0;

namespace KCL_rosplan {

	MyActionInterface::MyActionInterface(ros::NodeHandle &nh) {

	}

	bool MyActionInterface::concreteCallback(const rosplan_dispatch_msgs::ActionDispatch::ConstPtr& msg) {
		
		double x[5];
		double y[5];
		x[0]=1.0;
		y[0]=1.0;
		x[1]=6.0;
		y[1]=2.0;
		x[2]=7.0;
		y[2]=-5.0;
		x[3]=-3.0;
		y[3]=-8.0;
		x[4]=-7.0;
		y[4]=1.5;

		//std::cout << "OK3" << std::endl;
		//std::cout << msg->name.c_str() << ": ";
		//std::cout << msg->parameters[0].value << " " << msg->parameters[1].value << " " << msg->parameters[2].value << std::endl;
		//sleep(5);
		
		//actionlib::SimpleActionClient<motion_plan::PlanningAction> ac("reaching_goal",true);
		//motion_plan::PlanningGoal goal;
		//ac.waitForServer();
		//goal.target_pose.pose.position.x=6.0;
		//goal.target_pose.pose.position.y=2.0;
		//ac.sendGoal(goal);
		//ac.waitForResult();
		char c = msg->name.c_str()[0];
		if(c=='g')
		{
			int wp_target = msg->parameters[2].value[2] - '0';
			//std::cout << wp_target << std::endl;
			actionlib::SimpleActionClient<assignment_2_2022::PlanningAction> ac("reaching_goal",true);
			assignment_2_2022::PlanningGoal goal;
			ac.waitForServer();
			goal.target_pose.pose.position.x=x[wp_target];
			goal.target_pose.pose.position.y=y[wp_target];
			ac.sendGoal(goal);
			ac.waitForResult();
			//sleep(20);
		}
		

		if(c=='s')
		{
			bool rotate = true;
			while (rotate)
			{
				geometry_msgs::Twist msgT;
				msgT.angular.z = 1.0;
				//pub.publish(msgT);
				//std::cout << current << std::endl;
				//std::cout << ids[current_marker_goal] << std::endl;
				if (current == ids[current_marker_goal])
				{
					rotate = false;
					msgT.angular.z=0.0;
					std::cout << "Ok, maker seen!" << std::endl;
				}
				pub.publish(msgT);
			}
			++current_marker_goal;
			//sleep(20);

		}
		//ROS_INFO("Action (%s) performet: completed!", msg->name.c_str());
		return true;
	}

}

void my_callback(const my_rosplan_interface::Marker::ConstPtr& msg)
{
	//std::cout << "OK, seen!" << std::endl;
	if (msg->id == ids[current_marker_goal])
		current = msg->id;
}

int main(int argc, char** argv) {
	ros::init(argc, argv, "my_rosplan_action", ros::init_options::AnonymousName);
	ids[0]=11;
	ids[1]=12;
	ids[2]=13;
	ids[3]=15;
	ros::NodeHandle nh("~");
	pub = nh.advertise<geometry_msgs::Twist>("/cmd_vel",1000);
	sub = nh.subscribe("/marker_pub",1000,my_callback);
	KCL_rosplan::MyActionInterface my_aci(nh);
	my_aci.runActionInterface();
	return 0;
}
