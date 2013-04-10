/* Auto-generated by genmsg_cpp for file /home/arjun/ros/snot_bot/roscopter/msg/Mavlink_RAW_IMU.msg */
#ifndef ROSCOPTER_MESSAGE_MAVLINK_RAW_IMU_H
#define ROSCOPTER_MESSAGE_MAVLINK_RAW_IMU_H
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

namespace roscopter
{
template <class ContainerAllocator>
struct Mavlink_RAW_IMU_ {
  typedef Mavlink_RAW_IMU_<ContainerAllocator> Type;

  Mavlink_RAW_IMU_()
  : header()
  , time_usec(0)
  , xacc(0)
  , yacc(0)
  , zacc(0)
  , xgyro(0)
  , ygyro(0)
  , zgyro(0)
  , xmag(0)
  , ymag(0)
  , zmag(0)
  {
  }

  Mavlink_RAW_IMU_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , time_usec(0)
  , xacc(0)
  , yacc(0)
  , zacc(0)
  , xgyro(0)
  , ygyro(0)
  , zgyro(0)
  , xmag(0)
  , ymag(0)
  , zmag(0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint64_t _time_usec_type;
  uint64_t time_usec;

  typedef int32_t _xacc_type;
  int32_t xacc;

  typedef int32_t _yacc_type;
  int32_t yacc;

  typedef int32_t _zacc_type;
  int32_t zacc;

  typedef int32_t _xgyro_type;
  int32_t xgyro;

  typedef int32_t _ygyro_type;
  int32_t ygyro;

  typedef int32_t _zgyro_type;
  int32_t zgyro;

  typedef int32_t _xmag_type;
  int32_t xmag;

  typedef int32_t _ymag_type;
  int32_t ymag;

  typedef int32_t _zmag_type;
  int32_t zmag;


  typedef boost::shared_ptr< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Mavlink_RAW_IMU
typedef  ::roscopter::Mavlink_RAW_IMU_<std::allocator<void> > Mavlink_RAW_IMU;

typedef boost::shared_ptr< ::roscopter::Mavlink_RAW_IMU> Mavlink_RAW_IMUPtr;
typedef boost::shared_ptr< ::roscopter::Mavlink_RAW_IMU const> Mavlink_RAW_IMUConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace roscopter

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f00561d290c2da804223c20d12427677";
  }

  static const char* value(const  ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf00561d290c2da80ULL;
  static const uint64_t static_value2 = 0x4223c20d12427677ULL;
};

template<class ContainerAllocator>
struct DataType< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > {
  static const char* value() 
  {
    return "roscopter/Mavlink_RAW_IMU";
  }

  static const char* value(const  ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
#time since boot\n\
uint64 time_usec\n\
#linear acc\n\
int32 xacc\n\
int32 yacc\n\
int32 zacc\n\
#gyro\n\
int32 xgyro\n\
int32 ygyro\n\
int32 zgyro\n\
#magnetic field\n\
int32 xmag  \n\
int32 ymag\n\
int32 zmag\n\
\n\
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
";
  }

  static const char* value(const  ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.time_usec);
    stream.next(m.xacc);
    stream.next(m.yacc);
    stream.next(m.zacc);
    stream.next(m.xgyro);
    stream.next(m.ygyro);
    stream.next(m.zgyro);
    stream.next(m.xmag);
    stream.next(m.ymag);
    stream.next(m.zmag);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Mavlink_RAW_IMU_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::roscopter::Mavlink_RAW_IMU_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "time_usec: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.time_usec);
    s << indent << "xacc: ";
    Printer<int32_t>::stream(s, indent + "  ", v.xacc);
    s << indent << "yacc: ";
    Printer<int32_t>::stream(s, indent + "  ", v.yacc);
    s << indent << "zacc: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zacc);
    s << indent << "xgyro: ";
    Printer<int32_t>::stream(s, indent + "  ", v.xgyro);
    s << indent << "ygyro: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ygyro);
    s << indent << "zgyro: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zgyro);
    s << indent << "xmag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.xmag);
    s << indent << "ymag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ymag);
    s << indent << "zmag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.zmag);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROSCOPTER_MESSAGE_MAVLINK_RAW_IMU_H

