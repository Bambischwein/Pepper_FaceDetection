// Generated by gencpp from file people_msgs/PositionMeasurement.msg
// DO NOT EDIT!


#ifndef PEOPLE_MSGS_MESSAGE_POSITIONMEASUREMENT_H
#define PEOPLE_MSGS_MESSAGE_POSITIONMEASUREMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace people_msgs
{
template <class ContainerAllocator>
struct PositionMeasurement_
{
  typedef PositionMeasurement_<ContainerAllocator> Type;

  PositionMeasurement_()
    : header()
    , name()
    , object_id()
    , pos()
    , reliability(0.0)
    , covariance()
    , initialization(0)  {
      covariance.assign(0.0);
  }
  PositionMeasurement_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , object_id(_alloc)
    , pos(_alloc)
    , reliability(0.0)
    , covariance()
    , initialization(0)  {
  (void)_alloc;
      covariance.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _object_id_type;
  _object_id_type object_id;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _pos_type;
  _pos_type pos;

   typedef double _reliability_type;
  _reliability_type reliability;

   typedef boost::array<double, 9>  _covariance_type;
  _covariance_type covariance;

   typedef int8_t _initialization_type;
  _initialization_type initialization;





  typedef boost::shared_ptr< ::people_msgs::PositionMeasurement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::people_msgs::PositionMeasurement_<ContainerAllocator> const> ConstPtr;

}; // struct PositionMeasurement_

typedef ::people_msgs::PositionMeasurement_<std::allocator<void> > PositionMeasurement;

typedef boost::shared_ptr< ::people_msgs::PositionMeasurement > PositionMeasurementPtr;
typedef boost::shared_ptr< ::people_msgs::PositionMeasurement const> PositionMeasurementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::people_msgs::PositionMeasurement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::people_msgs::PositionMeasurement_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace people_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'people_msgs': ['/home/hanna/wg-perception_ws/src/people/people_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::people_msgs::PositionMeasurement_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::people_msgs::PositionMeasurement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::people_msgs::PositionMeasurement_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54fa938b4ec28728e01575b79eb0ec7c";
  }

  static const char* value(const ::people_msgs::PositionMeasurement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54fa938b4ec28728ULL;
  static const uint64_t static_value2 = 0xe01575b79eb0ec7cULL;
};

template<class ContainerAllocator>
struct DataType< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "people_msgs/PositionMeasurement";
  }

  static const char* value(const ::people_msgs::PositionMeasurement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header          header\n\
string          name\n\
string          object_id\n\
geometry_msgs/Point pos\n\
float64         reliability\n\
float64[9] 	covariance\n\
byte            initialization\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::people_msgs::PositionMeasurement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.object_id);
      stream.next(m.pos);
      stream.next(m.reliability);
      stream.next(m.covariance);
      stream.next(m.initialization);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionMeasurement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::people_msgs::PositionMeasurement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::people_msgs::PositionMeasurement_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "object_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.object_id);
    s << indent << "pos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.pos);
    s << indent << "reliability: ";
    Printer<double>::stream(s, indent + "  ", v.reliability);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
    s << indent << "initialization: ";
    Printer<int8_t>::stream(s, indent + "  ", v.initialization);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEOPLE_MSGS_MESSAGE_POSITIONMEASUREMENT_H
