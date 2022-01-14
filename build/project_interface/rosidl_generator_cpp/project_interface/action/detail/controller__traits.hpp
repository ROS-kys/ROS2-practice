// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__TRAITS_HPP_
#define PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__TRAITS_HPP_

#include "project_interface/action/detail/controller__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_Goal>()
{
  return "project_interface::action::Controller_Goal";
}

template<>
inline const char * name<project_interface::action::Controller_Goal>()
{
  return "project_interface/action/Controller_Goal";
}

template<>
struct has_fixed_size<project_interface::action::Controller_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project_interface::action::Controller_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project_interface::action::Controller_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_Result>()
{
  return "project_interface::action::Controller_Result";
}

template<>
inline const char * name<project_interface::action::Controller_Result>()
{
  return "project_interface/action/Controller_Result";
}

template<>
struct has_fixed_size<project_interface::action::Controller_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project_interface::action::Controller_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project_interface::action::Controller_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_Feedback>()
{
  return "project_interface::action::Controller_Feedback";
}

template<>
inline const char * name<project_interface::action::Controller_Feedback>()
{
  return "project_interface/action/Controller_Feedback";
}

template<>
struct has_fixed_size<project_interface::action::Controller_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<project_interface::action::Controller_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<project_interface::action::Controller_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "project_interface/action/detail/controller__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_SendGoal_Request>()
{
  return "project_interface::action::Controller_SendGoal_Request";
}

template<>
inline const char * name<project_interface::action::Controller_SendGoal_Request>()
{
  return "project_interface/action/Controller_SendGoal_Request";
}

template<>
struct has_fixed_size<project_interface::action::Controller_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<project_interface::action::Controller_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project_interface::action::Controller_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<project_interface::action::Controller_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project_interface::action::Controller_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_SendGoal_Response>()
{
  return "project_interface::action::Controller_SendGoal_Response";
}

template<>
inline const char * name<project_interface::action::Controller_SendGoal_Response>()
{
  return "project_interface/action/Controller_SendGoal_Response";
}

template<>
struct has_fixed_size<project_interface::action::Controller_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<project_interface::action::Controller_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<project_interface::action::Controller_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_SendGoal>()
{
  return "project_interface::action::Controller_SendGoal";
}

template<>
inline const char * name<project_interface::action::Controller_SendGoal>()
{
  return "project_interface/action/Controller_SendGoal";
}

template<>
struct has_fixed_size<project_interface::action::Controller_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<project_interface::action::Controller_SendGoal_Request>::value &&
    has_fixed_size<project_interface::action::Controller_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_interface::action::Controller_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<project_interface::action::Controller_SendGoal_Request>::value &&
    has_bounded_size<project_interface::action::Controller_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<project_interface::action::Controller_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<project_interface::action::Controller_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_interface::action::Controller_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_GetResult_Request>()
{
  return "project_interface::action::Controller_GetResult_Request";
}

template<>
inline const char * name<project_interface::action::Controller_GetResult_Request>()
{
  return "project_interface/action/Controller_GetResult_Request";
}

template<>
struct has_fixed_size<project_interface::action::Controller_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project_interface::action::Controller_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project_interface::action::Controller_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "project_interface/action/detail/controller__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_GetResult_Response>()
{
  return "project_interface::action::Controller_GetResult_Response";
}

template<>
inline const char * name<project_interface::action::Controller_GetResult_Response>()
{
  return "project_interface/action/Controller_GetResult_Response";
}

template<>
struct has_fixed_size<project_interface::action::Controller_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<project_interface::action::Controller_Result>::value> {};

template<>
struct has_bounded_size<project_interface::action::Controller_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<project_interface::action::Controller_Result>::value> {};

template<>
struct is_message<project_interface::action::Controller_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_GetResult>()
{
  return "project_interface::action::Controller_GetResult";
}

template<>
inline const char * name<project_interface::action::Controller_GetResult>()
{
  return "project_interface/action/Controller_GetResult";
}

template<>
struct has_fixed_size<project_interface::action::Controller_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<project_interface::action::Controller_GetResult_Request>::value &&
    has_fixed_size<project_interface::action::Controller_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<project_interface::action::Controller_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<project_interface::action::Controller_GetResult_Request>::value &&
    has_bounded_size<project_interface::action::Controller_GetResult_Response>::value
  >
{
};

template<>
struct is_service<project_interface::action::Controller_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<project_interface::action::Controller_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<project_interface::action::Controller_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "project_interface/action/detail/controller__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<project_interface::action::Controller_FeedbackMessage>()
{
  return "project_interface::action::Controller_FeedbackMessage";
}

template<>
inline const char * name<project_interface::action::Controller_FeedbackMessage>()
{
  return "project_interface/action/Controller_FeedbackMessage";
}

template<>
struct has_fixed_size<project_interface::action::Controller_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<project_interface::action::Controller_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<project_interface::action::Controller_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<project_interface::action::Controller_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<project_interface::action::Controller_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<project_interface::action::Controller>
  : std::true_type
{
};

template<>
struct is_action_goal<project_interface::action::Controller_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<project_interface::action::Controller_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<project_interface::action::Controller_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__TRAITS_HPP_
