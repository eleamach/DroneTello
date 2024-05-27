// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__STRUCT_H_
#define TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DroneMode in the package tello_interfaces.
typedef struct tello_interfaces__srv__DroneMode_Request
{
  int32_t a;
} tello_interfaces__srv__DroneMode_Request;

// Struct for a sequence of tello_interfaces__srv__DroneMode_Request.
typedef struct tello_interfaces__srv__DroneMode_Request__Sequence
{
  tello_interfaces__srv__DroneMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_interfaces__srv__DroneMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DroneMode in the package tello_interfaces.
typedef struct tello_interfaces__srv__DroneMode_Response
{
  bool reussi;
} tello_interfaces__srv__DroneMode_Response;

// Struct for a sequence of tello_interfaces__srv__DroneMode_Response.
typedef struct tello_interfaces__srv__DroneMode_Response__Sequence
{
  tello_interfaces__srv__DroneMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tello_interfaces__srv__DroneMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__STRUCT_H_
