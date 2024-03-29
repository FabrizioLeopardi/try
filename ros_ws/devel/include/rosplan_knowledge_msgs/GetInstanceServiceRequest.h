// Generated by gencpp from file rosplan_knowledge_msgs/GetInstanceServiceRequest.msg
// DO NOT EDIT!


#ifndef ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETINSTANCESERVICEREQUEST_H
#define ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETINSTANCESERVICEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosplan_knowledge_msgs
{
template <class ContainerAllocator>
struct GetInstanceServiceRequest_
{
  typedef GetInstanceServiceRequest_<ContainerAllocator> Type;

  GetInstanceServiceRequest_()
    : type_name()
    , include_constants(false)
    , include_subtypes(false)  {
    }
  GetInstanceServiceRequest_(const ContainerAllocator& _alloc)
    : type_name(_alloc)
    , include_constants(false)
    , include_subtypes(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_name_type;
  _type_name_type type_name;

   typedef uint8_t _include_constants_type;
  _include_constants_type include_constants;

   typedef uint8_t _include_subtypes_type;
  _include_subtypes_type include_subtypes;





  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetInstanceServiceRequest_

typedef ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<std::allocator<void> > GetInstanceServiceRequest;

typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetInstanceServiceRequest > GetInstanceServiceRequestPtr;
typedef boost::shared_ptr< ::rosplan_knowledge_msgs::GetInstanceServiceRequest const> GetInstanceServiceRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator1> & lhs, const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator2> & rhs)
{
  return lhs.type_name == rhs.type_name &&
    lhs.include_constants == rhs.include_constants &&
    lhs.include_subtypes == rhs.include_subtypes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator1> & lhs, const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rosplan_knowledge_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b08994cebbc7393beeb400f9b26e7b16";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb08994cebbc7393bULL;
  static const uint64_t static_value2 = 0xeeb400f9b26e7b16ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosplan_knowledge_msgs/GetInstanceServiceRequest";
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# PDDL problem generation; service(1/3):\n"
"# Get all instances of the type with the name 'typeName'.\n"
"string type_name\n"
"bool include_constants\n"
"bool include_subtypes\n"
;
  }

  static const char* value(const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type_name);
      stream.next(m.include_constants);
      stream.next(m.include_subtypes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetInstanceServiceRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosplan_knowledge_msgs::GetInstanceServiceRequest_<ContainerAllocator>& v)
  {
    s << indent << "type_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type_name);
    s << indent << "include_constants: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.include_constants);
    s << indent << "include_subtypes: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.include_subtypes);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSPLAN_KNOWLEDGE_MSGS_MESSAGE_GETINSTANCESERVICEREQUEST_H
