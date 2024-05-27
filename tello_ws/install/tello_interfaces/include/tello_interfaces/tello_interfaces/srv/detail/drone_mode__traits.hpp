// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__TRAITS_HPP_
#define TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tello_interfaces/srv/detail/drone_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tello_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DroneMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneMode_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tello_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tello_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tello_interfaces::srv::DroneMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tello_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tello_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tello_interfaces::srv::DroneMode_Request & msg)
{
  return tello_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tello_interfaces::srv::DroneMode_Request>()
{
  return "tello_interfaces::srv::DroneMode_Request";
}

template<>
inline const char * name<tello_interfaces::srv::DroneMode_Request>()
{
  return "tello_interfaces/srv/DroneMode_Request";
}

template<>
struct has_fixed_size<tello_interfaces::srv::DroneMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tello_interfaces::srv::DroneMode_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tello_interfaces::srv::DroneMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tello_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const DroneMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: reussi
  {
    out << "reussi: ";
    rosidl_generator_traits::value_to_yaml(msg.reussi, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reussi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reussi: ";
    rosidl_generator_traits::value_to_yaml(msg.reussi, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneMode_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tello_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tello_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tello_interfaces::srv::DroneMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tello_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tello_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const tello_interfaces::srv::DroneMode_Response & msg)
{
  return tello_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tello_interfaces::srv::DroneMode_Response>()
{
  return "tello_interfaces::srv::DroneMode_Response";
}

template<>
inline const char * name<tello_interfaces::srv::DroneMode_Response>()
{
  return "tello_interfaces/srv/DroneMode_Response";
}

template<>
struct has_fixed_size<tello_interfaces::srv::DroneMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tello_interfaces::srv::DroneMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tello_interfaces::srv::DroneMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tello_interfaces::srv::DroneMode>()
{
  return "tello_interfaces::srv::DroneMode";
}

template<>
inline const char * name<tello_interfaces::srv::DroneMode>()
{
  return "tello_interfaces/srv/DroneMode";
}

template<>
struct has_fixed_size<tello_interfaces::srv::DroneMode>
  : std::integral_constant<
    bool,
    has_fixed_size<tello_interfaces::srv::DroneMode_Request>::value &&
    has_fixed_size<tello_interfaces::srv::DroneMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<tello_interfaces::srv::DroneMode>
  : std::integral_constant<
    bool,
    has_bounded_size<tello_interfaces::srv::DroneMode_Request>::value &&
    has_bounded_size<tello_interfaces::srv::DroneMode_Response>::value
  >
{
};

template<>
struct is_service<tello_interfaces::srv::DroneMode>
  : std::true_type
{
};

template<>
struct is_service_request<tello_interfaces::srv::DroneMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tello_interfaces::srv::DroneMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__TRAITS_HPP_
