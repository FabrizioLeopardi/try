// Generated by gencpp from file rosplan_dispatch_msgs/NonBlockingDispatchActionGoal.msg
// DO NOT EDIT!


#ifndef ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHACTIONGOAL_H
#define ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <rosplan_dispatch_msgs/NonBlockingDispatchGoal.h>

namespace rosplan_dispatch_msgs
{
template <class ContainerAllocator>
struct NonBlockingDispatchActionGoal_
{
  typedef NonBlockingDispatchActionGoal_<ContainerAllocator> Type;

  NonBlockingDispatchActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  NonBlockingDispatchActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::rosplan_dispatch_msgs::NonBlockingDispatchGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct NonBlockingDispatchActionGoal_

typedef ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<std::allocator<void> > NonBlockingDispatchActionGoal;

typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal > NonBlockingDispatchActionGoalPtr;
typedef boost::shared_ptr< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal const> NonBlockingDispatchActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator1> & lhs, const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.goal_id == rhs.goal_id &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator1> & lhs, const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosplan_dispatch_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a60dfc14b207ac75b14e883f79f64a44";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa60dfc14b207ac75ULL;
  static const uint64_t static_value2 = 0xb14e883f79f64a44ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_dispatch_msgs/NonBlockingDispatchActionGoal";
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"NonBlockingDispatchGoal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: rosplan_dispatch_msgs/NonBlockingDispatchGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"std_msgs/Empty req\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Empty\n"
;
  }

  static const char* value(const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NonBlockingDispatchActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_dispatch_msgs::NonBlockingDispatchActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::rosplan_dispatch_msgs::NonBlockingDispatchGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_DISPATCH_MSGS_MESSAGE_NONBLOCKINGDISPATCHACTIONGOAL_H
