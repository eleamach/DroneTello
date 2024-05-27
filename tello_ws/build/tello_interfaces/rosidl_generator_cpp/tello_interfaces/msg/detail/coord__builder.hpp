// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tello_interfaces:msg/Coord.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__MSG__DETAIL__COORD__BUILDER_HPP_
#define TELLO_INTERFACES__MSG__DETAIL__COORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tello_interfaces/msg/detail/coord__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tello_interfaces
{

namespace msg
{

namespace builder
{

class Init_Coord_coordy
{
public:
  explicit Init_Coord_coordy(::tello_interfaces::msg::Coord & msg)
  : msg_(msg)
  {}
  ::tello_interfaces::msg::Coord coordy(::tello_interfaces::msg::Coord::_coordy_type arg)
  {
    msg_.coordy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_interfaces::msg::Coord msg_;
};

class Init_Coord_coordx
{
public:
  Init_Coord_coordx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coord_coordy coordx(::tello_interfaces::msg::Coord::_coordx_type arg)
  {
    msg_.coordx = std::move(arg);
    return Init_Coord_coordy(msg_);
  }

private:
  ::tello_interfaces::msg::Coord msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_interfaces::msg::Coord>()
{
  return tello_interfaces::msg::builder::Init_Coord_coordx();
}

}  // namespace tello_interfaces

#endif  // TELLO_INTERFACES__MSG__DETAIL__COORD__BUILDER_HPP_
