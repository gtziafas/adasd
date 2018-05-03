// Generated by gencpp from file robotnik_msgs/MotorStatus.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_MOTORSTATUS_H
#define ROBOTNIK_MSGS_MESSAGE_MOTORSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct MotorStatus_
{
  typedef MotorStatus_<ContainerAllocator> Type;

  MotorStatus_()
    : state()
    , status()
    , communicationstatus()
    , statusword()
    , driveflags()
    , activestatusword()
    , activedriveflags()
    , digitaloutputs(0)
    , digitalinputs(0)  {
    }
  MotorStatus_(const ContainerAllocator& _alloc)
    : state(_alloc)
    , status(_alloc)
    , communicationstatus(_alloc)
    , statusword(_alloc)
    , driveflags(_alloc)
    , activestatusword(_alloc)
    , activedriveflags(_alloc)
    , digitaloutputs(0)
    , digitalinputs(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_type;
  _status_type status;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _communicationstatus_type;
  _communicationstatus_type communicationstatus;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _statusword_type;
  _statusword_type statusword;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _driveflags_type;
  _driveflags_type driveflags;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _activestatusword_type;
  _activestatusword_type activestatusword;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _activedriveflags_type;
  _activedriveflags_type activedriveflags;

   typedef int32_t _digitaloutputs_type;
  _digitaloutputs_type digitaloutputs;

   typedef int32_t _digitalinputs_type;
  _digitalinputs_type digitalinputs;




  typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const> ConstPtr;

}; // struct MotorStatus_

typedef ::robotnik_msgs::MotorStatus_<std::allocator<void> > MotorStatus;

typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus > MotorStatusPtr;
typedef boost::shared_ptr< ::robotnik_msgs::MotorStatus const> MotorStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::MotorStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'robotnik_msgs': ['/home/kaoutsi/rbcar_ws/src/msgs/robotnik_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::MotorStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "042f5a8e9eaebc599a6782b2ff4252e5";
  }

  static const char* value(const ::robotnik_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x042f5a8e9eaebc59ULL;
  static const uint64_t static_value2 = 0x9a6782b2ff4252e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/MotorStatus";
  }

  static const char* value(const ::robotnik_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string state\n\
string status\n\
string communicationstatus\n\
string statusword\n\
string driveflags\n\
string[] activestatusword\n\
string[] activedriveflags\n\
int32 digitaloutputs\n\
int32 digitalinputs\n\
";
  }

  static const char* value(const ::robotnik_msgs::MotorStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.state);
      stream.next(m.status);
      stream.next(m.communicationstatus);
      stream.next(m.statusword);
      stream.next(m.driveflags);
      stream.next(m.activestatusword);
      stream.next(m.activedriveflags);
      stream.next(m.digitaloutputs);
      stream.next(m.digitalinputs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::MotorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::MotorStatus_<ContainerAllocator>& v)
  {
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
    s << indent << "status: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status);
    s << indent << "communicationstatus: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.communicationstatus);
    s << indent << "statusword: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.statusword);
    s << indent << "driveflags: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.driveflags);
    s << indent << "activestatusword[]" << std::endl;
    for (size_t i = 0; i < v.activestatusword.size(); ++i)
    {
      s << indent << "  activestatusword[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.activestatusword[i]);
    }
    s << indent << "activedriveflags[]" << std::endl;
    for (size_t i = 0; i < v.activedriveflags.size(); ++i)
    {
      s << indent << "  activedriveflags[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.activedriveflags[i]);
    }
    s << indent << "digitaloutputs: ";
    Printer<int32_t>::stream(s, indent + "  ", v.digitaloutputs);
    s << indent << "digitalinputs: ";
    Printer<int32_t>::stream(s, indent + "  ", v.digitalinputs);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_MOTORSTATUS_H
