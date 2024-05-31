// Generated by gencpp from file task2/Num.msg
// DO NOT EDIT!


#ifndef TASK2_MESSAGE_NUM_H
#define TASK2_MESSAGE_NUM_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace task2
{
template <class ContainerAllocator>
struct Num_
{
  typedef Num_<ContainerAllocator> Type;

  Num_()
    : num(0)  {
    }
  Num_(const ContainerAllocator& _alloc)
    : num(0)  {
  (void)_alloc;
    }



   typedef int64_t _num_type;
  _num_type num;





  typedef boost::shared_ptr< ::task2::Num_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::task2::Num_<ContainerAllocator> const> ConstPtr;

}; // struct Num_

typedef ::task2::Num_<std::allocator<void> > Num;

typedef boost::shared_ptr< ::task2::Num > NumPtr;
typedef boost::shared_ptr< ::task2::Num const> NumConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::task2::Num_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::task2::Num_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::task2::Num_<ContainerAllocator1> & lhs, const ::task2::Num_<ContainerAllocator2> & rhs)
{
  return lhs.num == rhs.num;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::task2::Num_<ContainerAllocator1> & lhs, const ::task2::Num_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace task2

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::task2::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::task2::Num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::task2::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::task2::Num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::task2::Num_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::task2::Num_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::task2::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "57d3c40ec3ac3754af76a83e6e73127a";
  }

  static const char* value(const ::task2::Num_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x57d3c40ec3ac3754ULL;
  static const uint64_t static_value2 = 0xaf76a83e6e73127aULL;
};

template<class ContainerAllocator>
struct DataType< ::task2::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "task2/Num";
  }

  static const char* value(const ::task2::Num_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::task2::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 num\n"
;
  }

  static const char* value(const ::task2::Num_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::task2::Num_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Num_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::task2::Num_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::task2::Num_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<int64_t>::stream(s, indent + "  ", v.num);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TASK2_MESSAGE_NUM_H