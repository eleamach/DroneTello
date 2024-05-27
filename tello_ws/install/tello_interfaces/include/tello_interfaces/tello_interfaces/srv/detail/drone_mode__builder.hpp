// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__BUILDER_HPP_
#define TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tello_interfaces/srv/detail/drone_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tello_interfaces
{

namespace srv
{

namespace builder
{

class Init_DroneMode_Request_a
{
public:
  Init_DroneMode_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tello_interfaces::srv::DroneMode_Request a(::tello_interfaces::srv::DroneMode_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_interfaces::srv::DroneMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_interfaces::srv::DroneMode_Request>()
{
  return tello_interfaces::srv::builder::Init_DroneMode_Request_a();
}

}  // namespace tello_interfaces


namespace tello_interfaces
{

namespace srv
{

namespace builder
{

class Init_DroneMode_Response_reussi
{
public:
  Init_DroneMode_Response_reussi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tello_interfaces::srv::DroneMode_Response reussi(::tello_interfaces::srv::DroneMode_Response::_reussi_type arg)
  {
    msg_.reussi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tello_interfaces::srv::DroneMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tello_interfaces::srv::DroneMode_Response>()
{
  return tello_interfaces::srv::builder::Init_DroneMode_Response_reussi();
}

}  // namespace tello_interfaces

#endif  // TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__BUILDER_HPP_
