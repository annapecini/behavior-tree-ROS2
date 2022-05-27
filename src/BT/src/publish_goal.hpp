#pragma once

#include <chrono>
#include <iomanip>
#include <iostream>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "std_msgs/msg/header.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/quaternion.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "tf2/transform_datatypes.h"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "behaviortree_cpp_v3/action_node.h"
#include "nav2_client.hpp"

using namespace BT;

class PublishGoal : public SyncActionNode
{
  public:
    PublishGoal(const std::string& name, const NodeConfiguration& config)
      : SyncActionNode(name, config)
    {
    }

    static PortsList providedPorts()
    {
        return { OutputPort<Pose2D>("message") };
    }

    // This Action writes a value into the port "text"
    NodeStatus tick() override
    {
        Pose2D value = convertFromString("-1.588;1.253;0.0;1.0");
        // the output may change at each tick(). Here we keep it simple.
        setOutput("message", value);
        return NodeStatus::SUCCESS;
    }
};