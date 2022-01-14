// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from final_project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_H_
#define FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_Goal
{
  int32_t goal_point;
} final_project_interface__action__Controller_Goal;

// Struct for a sequence of final_project_interface__action__Controller_Goal.
typedef struct final_project_interface__action__Controller_Goal__Sequence
{
  final_project_interface__action__Controller_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_Result
{
  int32_t end_point;
} final_project_interface__action__Controller_Result;

// Struct for a sequence of final_project_interface__action__Controller_Result.
typedef struct final_project_interface__action__Controller_Result__Sequence
{
  final_project_interface__action__Controller_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_Feedback
{
  int32_t now_point;
} final_project_interface__action__Controller_Feedback;

// Struct for a sequence of final_project_interface__action__Controller_Feedback.
typedef struct final_project_interface__action__Controller_Feedback__Sequence
{
  final_project_interface__action__Controller_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "final_project_interface/action/detail/controller__struct.h"

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  final_project_interface__action__Controller_Goal goal;
} final_project_interface__action__Controller_SendGoal_Request;

// Struct for a sequence of final_project_interface__action__Controller_SendGoal_Request.
typedef struct final_project_interface__action__Controller_SendGoal_Request__Sequence
{
  final_project_interface__action__Controller_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} final_project_interface__action__Controller_SendGoal_Response;

// Struct for a sequence of final_project_interface__action__Controller_SendGoal_Response.
typedef struct final_project_interface__action__Controller_SendGoal_Response__Sequence
{
  final_project_interface__action__Controller_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} final_project_interface__action__Controller_GetResult_Request;

// Struct for a sequence of final_project_interface__action__Controller_GetResult_Request.
typedef struct final_project_interface__action__Controller_GetResult_Request__Sequence
{
  final_project_interface__action__Controller_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "final_project_interface/action/detail/controller__struct.h"

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_GetResult_Response
{
  int8_t status;
  final_project_interface__action__Controller_Result result;
} final_project_interface__action__Controller_GetResult_Response;

// Struct for a sequence of final_project_interface__action__Controller_GetResult_Response.
typedef struct final_project_interface__action__Controller_GetResult_Response__Sequence
{
  final_project_interface__action__Controller_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "final_project_interface/action/detail/controller__struct.h"

// Struct defined in action/Controller in the package final_project_interface.
typedef struct final_project_interface__action__Controller_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  final_project_interface__action__Controller_Feedback feedback;
} final_project_interface__action__Controller_FeedbackMessage;

// Struct for a sequence of final_project_interface__action__Controller_FeedbackMessage.
typedef struct final_project_interface__action__Controller_FeedbackMessage__Sequence
{
  final_project_interface__action__Controller_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} final_project_interface__action__Controller_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_H_
