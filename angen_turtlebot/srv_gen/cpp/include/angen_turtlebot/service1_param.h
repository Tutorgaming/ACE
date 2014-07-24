/* Auto-generated by genmsg_cpp for file /home/angenuser/ros_workspace/angen_cognitive_environment/angen_turtlebot/srv/service1_param.srv */
#ifndef ANGEN_TURTLEBOT_SERVICE_SERVICE1_PARAM_H
#define ANGEN_TURTLEBOT_SERVICE_SERVICE1_PARAM_H
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

#include "ros/service_traits.h"




namespace angen_turtlebot
{
template <class ContainerAllocator>
struct service1_paramRequest_ {
  typedef service1_paramRequest_<ContainerAllocator> Type;

  service1_paramRequest_()
  {
  }

  service1_paramRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct service1_paramRequest
typedef  ::angen_turtlebot::service1_paramRequest_<std::allocator<void> > service1_paramRequest;

typedef boost::shared_ptr< ::angen_turtlebot::service1_paramRequest> service1_paramRequestPtr;
typedef boost::shared_ptr< ::angen_turtlebot::service1_paramRequest const> service1_paramRequestConstPtr;


template <class ContainerAllocator>
struct service1_paramResponse_ {
  typedef service1_paramResponse_<ContainerAllocator> Type;

  service1_paramResponse_()
  : Status(false)
  , Key(0)
  {
  }

  service1_paramResponse_(const ContainerAllocator& _alloc)
  : Status(false)
  , Key(0)
  {
  }

  typedef uint8_t _Status_type;
  uint8_t Status;

  typedef uint8_t _Key_type;
  uint8_t Key;


  typedef boost::shared_ptr< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct service1_paramResponse
typedef  ::angen_turtlebot::service1_paramResponse_<std::allocator<void> > service1_paramResponse;

typedef boost::shared_ptr< ::angen_turtlebot::service1_paramResponse> service1_paramResponsePtr;
typedef boost::shared_ptr< ::angen_turtlebot::service1_paramResponse const> service1_paramResponseConstPtr;

struct service1_param
{

typedef service1_paramRequest Request;
typedef service1_paramResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct service1_param
} // namespace angen_turtlebot

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service1_paramRequest";
  }

  static const char* value(const  ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b6db00bb6b5b71eef0a515fe8c4c7c0e";
  }

  static const char* value(const  ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb6db00bb6b5b71eeULL;
  static const uint64_t static_value2 = 0xf0a515fe8c4c7c0eULL;
};

template<class ContainerAllocator>
struct DataType< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service1_paramResponse";
  }

  static const char* value(const  ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool Status\n\
uint8 Key\n\
\n\
\n\
";
  }

  static const char* value(const  ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::angen_turtlebot::service1_paramRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct service1_paramRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::angen_turtlebot::service1_paramResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Status);
    stream.next(m.Key);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct service1_paramResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<angen_turtlebot::service1_param> {
  static const char* value() 
  {
    return "b6db00bb6b5b71eef0a515fe8c4c7c0e";
  }

  static const char* value(const angen_turtlebot::service1_param&) { return value(); } 
};

template<>
struct DataType<angen_turtlebot::service1_param> {
  static const char* value() 
  {
    return "angen_turtlebot/service1_param";
  }

  static const char* value(const angen_turtlebot::service1_param&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<angen_turtlebot::service1_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b6db00bb6b5b71eef0a515fe8c4c7c0e";
  }

  static const char* value(const angen_turtlebot::service1_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<angen_turtlebot::service1_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service1_param";
  }

  static const char* value(const angen_turtlebot::service1_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<angen_turtlebot::service1_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b6db00bb6b5b71eef0a515fe8c4c7c0e";
  }

  static const char* value(const angen_turtlebot::service1_paramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<angen_turtlebot::service1_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service1_param";
  }

  static const char* value(const angen_turtlebot::service1_paramResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ANGEN_TURTLEBOT_SERVICE_SERVICE1_PARAM_H
