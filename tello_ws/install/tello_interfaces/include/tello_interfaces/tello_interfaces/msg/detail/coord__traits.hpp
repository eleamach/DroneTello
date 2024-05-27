// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tello_interfaces:msg/Coord.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__MSG__DETAIL__COORD__TRAITS_HPP_
#define TELLO_INTERFACES__MSG__DETAIL__COORD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tello_interfaces/msg/detail/coord__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tello_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Coord & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordx
  {
    out << "coordx: ";
    rosidl_generator_traits::value_to_yaml(msg.coordx, out);
    out << ", ";
  }

  // member: coordy
  {
    out << "coordy: ";
    rosidl_generator_traits::value_to_yaml(msg.coordy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Coord & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordx: ";
    rosidl_generator_traits::value_to_yaml(msg.coordx, out);
    out << "\n";
  }

  // member: coordy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordy: ";
    rosidl_generator_traits::value_to_yaml(msg.coordy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Coord & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tello_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tello_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tello_interfaces::msg::Coord & msg,
  std::ostream & out, size_t indentation = 0)
{
  tello_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tello_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tello_interfaces::msg::Coord & msg)
{
  return tello_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tello_interfaces::msg::Coord>()
{
  return "tello_interfaces::msg::Coord";
}

template<>
inline const char * name<tello_interfaces::msg::Coord>()
{
  return "tello_interfaces/msg/Coord";
}

template<>
struct has_fixed_size<tello_interfaces::msg::Coord>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tello_interfaces::msg::Coord>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tello_interfaces::msg::Coord>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TELLO_INTERFACES__MSG__DETAIL__COORD__TRAITS_HPP_
