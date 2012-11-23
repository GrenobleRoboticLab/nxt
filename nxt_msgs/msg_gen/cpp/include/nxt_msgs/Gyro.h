/* Auto-generated by genmsg_cpp for file /home/xavier/ros_workspace/nxt/nxt_msgs/msg/Gyro.msg */
#ifndef NXT_MSGS_MESSAGE_GYRO_H
#define NXT_MSGS_MESSAGE_GYRO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Vector3.h"

namespace nxt_msgs
{
template <class ContainerAllocator>
struct Gyro_ {
  typedef Gyro_<ContainerAllocator> Type;

  Gyro_()
  : header()
  , calibration_offset()
  , angular_velocity()
  , angular_velocity_covariance()
  {
    angular_velocity_covariance.assign(0.0);
  }

  Gyro_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , calibration_offset(_alloc)
  , angular_velocity(_alloc)
  , angular_velocity_covariance()
  {
    angular_velocity_covariance.assign(0.0);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _calibration_offset_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  calibration_offset;

  typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_type;
   ::geometry_msgs::Vector3_<ContainerAllocator>  angular_velocity;

  typedef boost::array<double, 9>  _angular_velocity_covariance_type;
  boost::array<double, 9>  angular_velocity_covariance;


  typedef boost::shared_ptr< ::nxt_msgs::Gyro_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nxt_msgs::Gyro_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Gyro
typedef  ::nxt_msgs::Gyro_<std::allocator<void> > Gyro;

typedef boost::shared_ptr< ::nxt_msgs::Gyro> GyroPtr;
typedef boost::shared_ptr< ::nxt_msgs::Gyro const> GyroConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::nxt_msgs::Gyro_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::nxt_msgs::Gyro_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace nxt_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::nxt_msgs::Gyro_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::nxt_msgs::Gyro_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::nxt_msgs::Gyro_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e8c3b3c062e5c0998e1d03e28394cf83";
  }

  static const char* value(const  ::nxt_msgs::Gyro_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe8c3b3c062e5c099ULL;
  static const uint64_t static_value2 = 0x8e1d03e28394cf83ULL;
};

template<class ContainerAllocator>
struct DataType< ::nxt_msgs::Gyro_<ContainerAllocator> > {
  static const char* value() 
  {
    return "nxt_msgs/Gyro";
  }

  static const char* value(const  ::nxt_msgs::Gyro_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::nxt_msgs::Gyro_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
geometry_msgs/Vector3 calibration_offset\n\
geometry_msgs/Vector3 angular_velocity\n\
float64[9] angular_velocity_covariance\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const  ::nxt_msgs::Gyro_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::nxt_msgs::Gyro_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::nxt_msgs::Gyro_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::nxt_msgs::Gyro_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.calibration_offset);
    stream.next(m.angular_velocity);
    stream.next(m.angular_velocity_covariance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Gyro_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nxt_msgs::Gyro_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::nxt_msgs::Gyro_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "calibration_offset: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.calibration_offset);
    s << indent << "angular_velocity: ";
s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity);
    s << indent << "angular_velocity_covariance[]" << std::endl;
    for (size_t i = 0; i < v.angular_velocity_covariance.size(); ++i)
    {
      s << indent << "  angular_velocity_covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.angular_velocity_covariance[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // NXT_MSGS_MESSAGE_GYRO_H
