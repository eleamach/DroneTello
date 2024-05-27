// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tello_interfaces:srv/DroneMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tello_interfaces/srv/detail/drone_mode__struct.h"
#include "tello_interfaces/srv/detail/drone_mode__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tello_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DroneMode_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneMode_Request_type_support_ids_t;

static const _DroneMode_Request_type_support_ids_t _DroneMode_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DroneMode_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneMode_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneMode_Request_type_support_symbol_names_t _DroneMode_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_interfaces, srv, DroneMode_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_interfaces, srv, DroneMode_Request)),
  }
};

typedef struct _DroneMode_Request_type_support_data_t
{
  void * data[2];
} _DroneMode_Request_type_support_data_t;

static _DroneMode_Request_type_support_data_t _DroneMode_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneMode_Request_message_typesupport_map = {
  2,
  "tello_interfaces",
  &_DroneMode_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DroneMode_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DroneMode_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneMode_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneMode_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tello_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tello_interfaces, srv, DroneMode_Request)() {
  return &::tello_interfaces::srv::rosidl_typesupport_c::DroneMode_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tello_interfaces/srv/detail/drone_mode__struct.h"
// already included above
// #include "tello_interfaces/srv/detail/drone_mode__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tello_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DroneMode_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneMode_Response_type_support_ids_t;

static const _DroneMode_Response_type_support_ids_t _DroneMode_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DroneMode_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneMode_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneMode_Response_type_support_symbol_names_t _DroneMode_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_interfaces, srv, DroneMode_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_interfaces, srv, DroneMode_Response)),
  }
};

typedef struct _DroneMode_Response_type_support_data_t
{
  void * data[2];
} _DroneMode_Response_type_support_data_t;

static _DroneMode_Response_type_support_data_t _DroneMode_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneMode_Response_message_typesupport_map = {
  2,
  "tello_interfaces",
  &_DroneMode_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DroneMode_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DroneMode_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DroneMode_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneMode_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tello_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tello_interfaces, srv, DroneMode_Response)() {
  return &::tello_interfaces::srv::rosidl_typesupport_c::DroneMode_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tello_interfaces/srv/detail/drone_mode__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tello_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DroneMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DroneMode_type_support_ids_t;

static const _DroneMode_type_support_ids_t _DroneMode_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DroneMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DroneMode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DroneMode_type_support_symbol_names_t _DroneMode_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tello_interfaces, srv, DroneMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tello_interfaces, srv, DroneMode)),
  }
};

typedef struct _DroneMode_type_support_data_t
{
  void * data[2];
} _DroneMode_type_support_data_t;

static _DroneMode_type_support_data_t _DroneMode_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DroneMode_service_typesupport_map = {
  2,
  "tello_interfaces",
  &_DroneMode_service_typesupport_ids.typesupport_identifier[0],
  &_DroneMode_service_typesupport_symbol_names.symbol_name[0],
  &_DroneMode_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DroneMode_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DroneMode_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tello_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tello_interfaces, srv, DroneMode)() {
  return &::tello_interfaces::srv::rosidl_typesupport_c::DroneMode_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
