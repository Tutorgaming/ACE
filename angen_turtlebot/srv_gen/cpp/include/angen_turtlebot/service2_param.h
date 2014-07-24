/* Auto-generated by genmsg_cpp for file /home/angenuser/ros_workspace/angen_cognitive_environment/angen_turtlebot/srv/service2_param.srv */
#ifndef ANGEN_TURTLEBOT_SERVICE_SERVICE2_PARAM_H
#define ANGEN_TURTLEBOT_SERVICE_SERVICE2_PARAM_H
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
struct service2_paramRequest_ {
  typedef service2_paramRequest_<ContainerAllocator> Type;

  service2_paramRequest_()
  : wait_time(0)
  , will_shake(false)
  , is_straight_line(false)
  {
  }

  service2_paramRequest_(const ContainerAllocator& _alloc)
  : wait_time(0)
  , will_shake(false)
  , is_straight_line(false)
  {
  }

  typedef uint8_t _wait_time_type;
  uint8_t wait_time;

  typedef uint8_t _will_shake_type;
  uint8_t will_shake;

  typedef uint8_t _is_straight_line_type;
  uint8_t is_straight_line;


  typedef boost::shared_ptr< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct service2_paramRequest
typedef  ::angen_turtlebot::service2_paramRequest_<std::allocator<void> > service2_paramRequest;

typedef boost::shared_ptr< ::angen_turtlebot::service2_paramRequest> service2_paramRequestPtr;
typedef boost::shared_ptr< ::angen_turtlebot::service2_paramRequest const> service2_paramRequestConstPtr;


template <class ContainerAllocator>
struct service2_paramResponse_ {
  typedef service2_paramResponse_<ContainerAllocator> Type;

  service2_paramResponse_()
  : Status(false)
  {
  }

  service2_paramResponse_(const ContainerAllocator& _alloc)
  : Status(false)
  {
  }

  typedef uint8_t _Status_type;
  uint8_t Status;


  typedef boost::shared_ptr< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct service2_paramResponse
typedef  ::angen_turtlebot::service2_paramResponse_<std::allocator<void> > service2_paramResponse;

typedef boost::shared_ptr< ::angen_turtlebot::service2_paramResponse> service2_paramResponsePtr;
typedef boost::shared_ptr< ::angen_turtlebot::service2_paramResponse const> service2_paramResponseConstPtr;

struct service2_param
{

typedef service2_paramRequest Request;
typedef service2_paramResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct service2_param
} // namespace angen_turtlebot

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "099211e31a9f1cefb80592f7f70b89cd";
  }

  static const char* value(const  ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x099211e31a9f1cefULL;
  static const uint64_t static_value2 = 0xb80592f7f70b89cdULL;
};

template<class ContainerAllocator>
struct DataType< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service2_paramRequest";
  }

  static const char* value(const  ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "uint8 wait_time\n\
bool will_shake\n\
bool is_straight_line\n\
\n\
";
  }

  static const char* value(const  ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "513e93c68ef2f26ff494445b932bb052";
  }

  static const char* value(const  ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x513e93c68ef2f26fULL;
  static const uint64_t static_value2 = 0xf494445b932bb052ULL;
};

template<class ContainerAllocator>
struct DataType< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service2_paramResponse";
  }

  static const char* value(const  ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool Status\n\
\n\
\n\
";
  }

  static const char* value(const  ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::angen_turtlebot::service2_paramRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.wait_time);
    stream.next(m.will_shake);
    stream.next(m.is_straight_line);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct service2_paramRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::angen_turtlebot::service2_paramResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.Status);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct service2_paramResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<angen_turtlebot::service2_param> {
  static const char* value() 
  {
    return "694429f7c3dd2c589b1a96726970a0a2";
  }

  static const char* value(const angen_turtlebot::service2_param&) { return value(); } 
};

template<>
struct DataType<angen_turtlebot::service2_param> {
  static const char* value() 
  {
    return "angen_turtlebot/service2_param";
  }

  static const char* value(const angen_turtlebot::service2_param&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<angen_turtlebot::service2_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "694429f7c3dd2c589b1a96726970a0a2";
  }

  static const char* value(const angen_turtlebot::service2_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<angen_turtlebot::service2_paramRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service2_param";
  }

  static const char* value(const angen_turtlebot::service2_paramRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<angen_turtlebot::service2_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "694429f7c3dd2c589b1a96726970a0a2";
  }

  static const char* value(const angen_turtlebot::service2_paramResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<angen_turtlebot::service2_paramResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "angen_turtlebot/service2_param";
  }

  static const char* value(const angen_turtlebot::service2_paramResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // ANGEN_TURTLEBOT_SERVICE_SERVICE2_PARAM_H
