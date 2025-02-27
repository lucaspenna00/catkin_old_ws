// Generated by gencpp from file mavros_msgs/Waypoint.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_WAYPOINT_H
#define MAVROS_MSGS_MESSAGE_WAYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct Waypoint_
{
  typedef Waypoint_<ContainerAllocator> Type;

  Waypoint_()
    : frame(0)
    , command(0)
    , is_current(false)
    , autocontinue(false)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , x_lat(0.0)
    , y_long(0.0)
    , z_alt(0.0)  {
    }
  Waypoint_(const ContainerAllocator& _alloc)
    : frame(0)
    , command(0)
    , is_current(false)
    , autocontinue(false)
    , param1(0.0)
    , param2(0.0)
    , param3(0.0)
    , param4(0.0)
    , x_lat(0.0)
    , y_long(0.0)
    , z_alt(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _frame_type;
  _frame_type frame;

   typedef uint16_t _command_type;
  _command_type command;

   typedef uint8_t _is_current_type;
  _is_current_type is_current;

   typedef uint8_t _autocontinue_type;
  _autocontinue_type autocontinue;

   typedef float _param1_type;
  _param1_type param1;

   typedef float _param2_type;
  _param2_type param2;

   typedef float _param3_type;
  _param3_type param3;

   typedef float _param4_type;
  _param4_type param4;

   typedef double _x_lat_type;
  _x_lat_type x_lat;

   typedef double _y_long_type;
  _y_long_type y_long;

   typedef double _z_alt_type;
  _z_alt_type z_alt;



  enum {
    FRAME_GLOBAL = 0u,
    FRAME_LOCAL_NED = 1u,
    FRAME_MISSION = 2u,
    FRAME_GLOBAL_REL_ALT = 3u,
    FRAME_LOCAL_ENU = 4u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::Waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::Waypoint_<ContainerAllocator> const> ConstPtr;

}; // struct Waypoint_

typedef ::mavros_msgs::Waypoint_<std::allocator<void> > Waypoint;

typedef boost::shared_ptr< ::mavros_msgs::Waypoint > WaypointPtr;
typedef boost::shared_ptr< ::mavros_msgs::Waypoint const> WaypointConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::Waypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::Waypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/lunar/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/lunar/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/lucas/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/lunar/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Waypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7a0d2b53dcd6b7aff0aa748703e85e92";
  }

  static const char* value(const ::mavros_msgs::Waypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7a0d2b53dcd6b7afULL;
  static const uint64_t static_value2 = 0xf0aa748703e85e92ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/Waypoint";
  }

  static const char* value(const ::mavros_msgs::Waypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Waypoint.msg\n\
#\n\
# ROS representation of MAVLink MISSION_ITEM\n\
# See mavlink documentation\n\
\n\
\n\
\n\
# see enum MAV_FRAME\n\
uint8 frame\n\
uint8 FRAME_GLOBAL = 0\n\
uint8 FRAME_LOCAL_NED = 1\n\
uint8 FRAME_MISSION = 2\n\
uint8 FRAME_GLOBAL_REL_ALT = 3\n\
uint8 FRAME_LOCAL_ENU = 4\n\
\n\
# see enum MAV_CMD and CommandCode.msg\n\
uint16 command\n\
\n\
bool is_current\n\
bool autocontinue\n\
# meaning of this params described in enum MAV_CMD\n\
float32 param1\n\
float32 param2\n\
float32 param3\n\
float32 param4\n\
float64 x_lat\n\
float64 y_long\n\
float64 z_alt\n\
";
  }

  static const char* value(const ::mavros_msgs::Waypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::Waypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame);
      stream.next(m.command);
      stream.next(m.is_current);
      stream.next(m.autocontinue);
      stream.next(m.param1);
      stream.next(m.param2);
      stream.next(m.param3);
      stream.next(m.param4);
      stream.next(m.x_lat);
      stream.next(m.y_long);
      stream.next(m.z_alt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Waypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::Waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::Waypoint_<ContainerAllocator>& v)
  {
    s << indent << "frame: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.frame);
    s << indent << "command: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.command);
    s << indent << "is_current: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_current);
    s << indent << "autocontinue: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autocontinue);
    s << indent << "param1: ";
    Printer<float>::stream(s, indent + "  ", v.param1);
    s << indent << "param2: ";
    Printer<float>::stream(s, indent + "  ", v.param2);
    s << indent << "param3: ";
    Printer<float>::stream(s, indent + "  ", v.param3);
    s << indent << "param4: ";
    Printer<float>::stream(s, indent + "  ", v.param4);
    s << indent << "x_lat: ";
    Printer<double>::stream(s, indent + "  ", v.x_lat);
    s << indent << "y_long: ";
    Printer<double>::stream(s, indent + "  ", v.y_long);
    s << indent << "z_alt: ";
    Printer<double>::stream(s, indent + "  ", v.z_alt);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_WAYPOINT_H
