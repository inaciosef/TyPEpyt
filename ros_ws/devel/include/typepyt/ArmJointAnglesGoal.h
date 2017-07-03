// Generated by gencpp from file typepyt/ArmJointAnglesGoal.msg
// DO NOT EDIT!


#ifndef TYPEPYT_MESSAGE_ARMJOINTANGLESGOAL_H
#define TYPEPYT_MESSAGE_ARMJOINTANGLESGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <typepyt/JointAngles.h>

namespace typepyt
{
template <class ContainerAllocator>
struct ArmJointAnglesGoal_
{
  typedef ArmJointAnglesGoal_<ContainerAllocator> Type;

  ArmJointAnglesGoal_()
    : angles()  {
    }
  ArmJointAnglesGoal_(const ContainerAllocator& _alloc)
    : angles(_alloc)  {
  (void)_alloc;
    }



   typedef  ::typepyt::JointAngles_<ContainerAllocator>  _angles_type;
  _angles_type angles;




  typedef boost::shared_ptr< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> const> ConstPtr;

}; // struct ArmJointAnglesGoal_

typedef ::typepyt::ArmJointAnglesGoal_<std::allocator<void> > ArmJointAnglesGoal;

typedef boost::shared_ptr< ::typepyt::ArmJointAnglesGoal > ArmJointAnglesGoalPtr;
typedef boost::shared_ptr< ::typepyt::ArmJointAnglesGoal const> ArmJointAnglesGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace typepyt

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'typepyt': ['/home/nvidia/Ty/TyPEpyt/ros_ws/src/typepyt/msg', '/home/nvidia/Ty/TyPEpyt/ros_ws/devel/share/typepyt/msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b177ebe4b350b7b614560d610addf92";
  }

  static const char* value(const ::typepyt::ArmJointAnglesGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b177ebe4b350b7bULL;
  static const uint64_t static_value2 = 0x614560d610addf92ULL;
};

template<class ContainerAllocator>
struct DataType< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "typepyt/ArmJointAnglesGoal";
  }

  static const char* value(const ::typepyt::ArmJointAnglesGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Goal\n\
JointAngles angles\n\
\n\
================================================================================\n\
MSG: typepyt/JointAngles\n\
float32 hip\n\
float32 shoulder\n\
float32 elbow\n\
float32 wrist\n\
";
  }

  static const char* value(const ::typepyt::ArmJointAnglesGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArmJointAnglesGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::typepyt::ArmJointAnglesGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::typepyt::ArmJointAnglesGoal_<ContainerAllocator>& v)
  {
    s << indent << "angles: ";
    s << std::endl;
    Printer< ::typepyt::JointAngles_<ContainerAllocator> >::stream(s, indent + "  ", v.angles);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TYPEPYT_MESSAGE_ARMJOINTANGLESGOAL_H