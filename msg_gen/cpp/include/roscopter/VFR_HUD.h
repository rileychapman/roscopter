/* Auto-generated by genmsg_cpp for file /home/arjun/ros/snot_bot/roscopter/msg/VFR_HUD.msg */
#ifndef ROSCOPTER_MESSAGE_VFR_HUD_H
#define ROSCOPTER_MESSAGE_VFR_HUD_H
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


namespace roscopter
{
template <class ContainerAllocator>
struct VFR_HUD_ {
  typedef VFR_HUD_<ContainerAllocator> Type;

  VFR_HUD_()
  : airspeed(0.0)
  , groundspeed(0.0)
  , heading(0)
  , throttle(0)
  , alt(0.0)
  , climb(0.0)
  {
  }

  VFR_HUD_(const ContainerAllocator& _alloc)
  : airspeed(0.0)
  , groundspeed(0.0)
  , heading(0)
  , throttle(0)
  , alt(0.0)
  , climb(0.0)
  {
  }

  typedef float _airspeed_type;
  float airspeed;

  typedef float _groundspeed_type;
  float groundspeed;

  typedef int16_t _heading_type;
  int16_t heading;

  typedef uint16_t _throttle_type;
  uint16_t throttle;

  typedef float _alt_type;
  float alt;

  typedef float _climb_type;
  float climb;


  typedef boost::shared_ptr< ::roscopter::VFR_HUD_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roscopter::VFR_HUD_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct VFR_HUD
typedef  ::roscopter::VFR_HUD_<std::allocator<void> > VFR_HUD;

typedef boost::shared_ptr< ::roscopter::VFR_HUD> VFR_HUDPtr;
typedef boost::shared_ptr< ::roscopter::VFR_HUD const> VFR_HUDConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::roscopter::VFR_HUD_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::roscopter::VFR_HUD_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace roscopter

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::roscopter::VFR_HUD_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::roscopter::VFR_HUD_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::roscopter::VFR_HUD_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d675e2b95b45d51cd67453c819986216";
  }

  static const char* value(const  ::roscopter::VFR_HUD_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd675e2b95b45d51cULL;
  static const uint64_t static_value2 = 0xd67453c819986216ULL;
};

template<class ContainerAllocator>
struct DataType< ::roscopter::VFR_HUD_<ContainerAllocator> > {
  static const char* value() 
  {
    return "roscopter/VFR_HUD";
  }

  static const char* value(const  ::roscopter::VFR_HUD_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::roscopter::VFR_HUD_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# Metrics typically displayed on a HUD for fixed wing aircraft        \n\
#airspeed                  : Current airspeed in m/s (float)\n\
#groundspeed               : Current ground speed in m/s (float)\n\
#heading                   : Current heading in degrees, in compass units (0..360, 0=north) (int16_t)  \n\
#throttle                  : Current throttle setting in integer percent, 0 to 100 (uint16_t)  \n\
#alt                       : Current altitude (MSL), in meters (float)\n\
#climb                     : Current climb rate in meters/second (float)             \n\
\n\
float32 airspeed \n\
float32 groundspeed \n\
int16 heading\n\
uint16 throttle\n\
float32 alt \n\
float32 climb\n\
\n\
";
  }

  static const char* value(const  ::roscopter::VFR_HUD_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::roscopter::VFR_HUD_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::roscopter::VFR_HUD_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.airspeed);
    stream.next(m.groundspeed);
    stream.next(m.heading);
    stream.next(m.throttle);
    stream.next(m.alt);
    stream.next(m.climb);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct VFR_HUD_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roscopter::VFR_HUD_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::roscopter::VFR_HUD_<ContainerAllocator> & v) 
  {
    s << indent << "airspeed: ";
    Printer<float>::stream(s, indent + "  ", v.airspeed);
    s << indent << "groundspeed: ";
    Printer<float>::stream(s, indent + "  ", v.groundspeed);
    s << indent << "heading: ";
    Printer<int16_t>::stream(s, indent + "  ", v.heading);
    s << indent << "throttle: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.throttle);
    s << indent << "alt: ";
    Printer<float>::stream(s, indent + "  ", v.alt);
    s << indent << "climb: ";
    Printer<float>::stream(s, indent + "  ", v.climb);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ROSCOPTER_MESSAGE_VFR_HUD_H

