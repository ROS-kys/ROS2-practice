// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_H_
#define PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_point'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_Goal
{
  rosidl_runtime_c__String goal_point;
} project_interface__action__Controller_Goal;

// Struct for a sequence of project_interface__action__Controller_Goal.
typedef struct project_interface__action__Controller_Goal__Sequence
{
  project_interface__action__Controller_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_Result
{
  rosidl_runtime_c__String result;
} project_interface__action__Controller_Result;

// Struct for a sequence of project_interface__action__Controller_Result.
typedef struct project_interface__action__Controller_Result__Sequence
{
  project_interface__action__Controller_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_Feedback
{
  rosidl_runtime_c__String status;
} project_interface__action__Controller_Feedback;

// Struct for a sequence of project_interface__action__Controller_Feedback.
typedef struct project_interface__action__Controller_Feedback__Sequence
{
  project_interface__action__Controller_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "project_interface/action/detail/controller__struct.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  project_interface__action__Controller_Goal goal;
} project_interface__action__Controller_SendGoal_Request;

// Struct for a sequence of project_interface__action__Controller_SendGoal_Request.
typedef struct project_interface__action__Controller_SendGoal_Request__Sequence
{
  project_interface__action__Controller_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} project_interface__action__Controller_SendGoal_Response;

// Struct for a sequence of project_interface__action__Controller_SendGoal_Response.
typedef struct project_interface__action__Controller_SendGoal_Response__Sequence
{
  project_interface__action__Controller_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} project_interface__action__Controller_GetResult_Request;

// Struct for a sequence of project_interface__action__Controller_GetResult_Request.
typedef struct project_interface__action__Controller_GetResult_Request__Sequence
{
  project_interface__action__Controller_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "project_interface/action/detail/controller__struct.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_GetResult_Response
{
  int8_t status;
  project_interface__action__Controller_Result result;
} project_interface__action__Controller_GetResult_Response;

// Struct for a sequence of project_interface__action__Controller_GetResult_Response.
typedef struct project_interface__action__Controller_GetResult_Response__Sequence
{
  project_interface__action__Controller_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "project_interface/action/detail/controller__struct.h"

// Struct defined in action/Controller in the package project_interface.
typedef struct project_interface__action__Controller_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  project_interface__action__Controller_Feedback feedback;
} project_interface__action__Controller_FeedbackMessage;

// Struct for a sequence of project_interface__action__Controller_FeedbackMessage.
typedef struct project_interface__action__Controller_FeedbackMessage__Sequence
{
  project_interface__action__Controller_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} project_interface__action__Controller_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_H_
