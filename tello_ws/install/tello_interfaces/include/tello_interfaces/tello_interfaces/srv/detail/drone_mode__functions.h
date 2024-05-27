// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice

#ifndef TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__FUNCTIONS_H_
#define TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tello_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tello_interfaces/srv/detail/drone_mode__struct.h"

/// Initialize srv/DroneMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tello_interfaces__srv__DroneMode_Request
 * )) before or use
 * tello_interfaces__srv__DroneMode_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Request__init(tello_interfaces__srv__DroneMode_Request * msg);

/// Finalize srv/DroneMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Request__fini(tello_interfaces__srv__DroneMode_Request * msg);

/// Create srv/DroneMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tello_interfaces__srv__DroneMode_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
tello_interfaces__srv__DroneMode_Request *
tello_interfaces__srv__DroneMode_Request__create();

/// Destroy srv/DroneMode message.
/**
 * It calls
 * tello_interfaces__srv__DroneMode_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Request__destroy(tello_interfaces__srv__DroneMode_Request * msg);

/// Check for srv/DroneMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Request__are_equal(const tello_interfaces__srv__DroneMode_Request * lhs, const tello_interfaces__srv__DroneMode_Request * rhs);

/// Copy a srv/DroneMode message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Request__copy(
  const tello_interfaces__srv__DroneMode_Request * input,
  tello_interfaces__srv__DroneMode_Request * output);

/// Initialize array of srv/DroneMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * tello_interfaces__srv__DroneMode_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Request__Sequence__init(tello_interfaces__srv__DroneMode_Request__Sequence * array, size_t size);

/// Finalize array of srv/DroneMode messages.
/**
 * It calls
 * tello_interfaces__srv__DroneMode_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Request__Sequence__fini(tello_interfaces__srv__DroneMode_Request__Sequence * array);

/// Create array of srv/DroneMode messages.
/**
 * It allocates the memory for the array and calls
 * tello_interfaces__srv__DroneMode_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
tello_interfaces__srv__DroneMode_Request__Sequence *
tello_interfaces__srv__DroneMode_Request__Sequence__create(size_t size);

/// Destroy array of srv/DroneMode messages.
/**
 * It calls
 * tello_interfaces__srv__DroneMode_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Request__Sequence__destroy(tello_interfaces__srv__DroneMode_Request__Sequence * array);

/// Check for srv/DroneMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Request__Sequence__are_equal(const tello_interfaces__srv__DroneMode_Request__Sequence * lhs, const tello_interfaces__srv__DroneMode_Request__Sequence * rhs);

/// Copy an array of srv/DroneMode messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Request__Sequence__copy(
  const tello_interfaces__srv__DroneMode_Request__Sequence * input,
  tello_interfaces__srv__DroneMode_Request__Sequence * output);

/// Initialize srv/DroneMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tello_interfaces__srv__DroneMode_Response
 * )) before or use
 * tello_interfaces__srv__DroneMode_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Response__init(tello_interfaces__srv__DroneMode_Response * msg);

/// Finalize srv/DroneMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Response__fini(tello_interfaces__srv__DroneMode_Response * msg);

/// Create srv/DroneMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tello_interfaces__srv__DroneMode_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
tello_interfaces__srv__DroneMode_Response *
tello_interfaces__srv__DroneMode_Response__create();

/// Destroy srv/DroneMode message.
/**
 * It calls
 * tello_interfaces__srv__DroneMode_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Response__destroy(tello_interfaces__srv__DroneMode_Response * msg);

/// Check for srv/DroneMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Response__are_equal(const tello_interfaces__srv__DroneMode_Response * lhs, const tello_interfaces__srv__DroneMode_Response * rhs);

/// Copy a srv/DroneMode message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Response__copy(
  const tello_interfaces__srv__DroneMode_Response * input,
  tello_interfaces__srv__DroneMode_Response * output);

/// Initialize array of srv/DroneMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * tello_interfaces__srv__DroneMode_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Response__Sequence__init(tello_interfaces__srv__DroneMode_Response__Sequence * array, size_t size);

/// Finalize array of srv/DroneMode messages.
/**
 * It calls
 * tello_interfaces__srv__DroneMode_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Response__Sequence__fini(tello_interfaces__srv__DroneMode_Response__Sequence * array);

/// Create array of srv/DroneMode messages.
/**
 * It allocates the memory for the array and calls
 * tello_interfaces__srv__DroneMode_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
tello_interfaces__srv__DroneMode_Response__Sequence *
tello_interfaces__srv__DroneMode_Response__Sequence__create(size_t size);

/// Destroy array of srv/DroneMode messages.
/**
 * It calls
 * tello_interfaces__srv__DroneMode_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
void
tello_interfaces__srv__DroneMode_Response__Sequence__destroy(tello_interfaces__srv__DroneMode_Response__Sequence * array);

/// Check for srv/DroneMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Response__Sequence__are_equal(const tello_interfaces__srv__DroneMode_Response__Sequence * lhs, const tello_interfaces__srv__DroneMode_Response__Sequence * rhs);

/// Copy an array of srv/DroneMode messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_tello_interfaces
bool
tello_interfaces__srv__DroneMode_Response__Sequence__copy(
  const tello_interfaces__srv__DroneMode_Response__Sequence * input,
  tello_interfaces__srv__DroneMode_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TELLO_INTERFACES__SRV__DETAIL__DRONE_MODE__FUNCTIONS_H_
