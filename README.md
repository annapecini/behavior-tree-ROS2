# behavior-tree-ROS2
This is an example of using Behavior Tree to move around the simulation robot. The example is tested on NeuronBot simulation found here: https://github.com/Adlink-ROS/neuronbot2#bring-up-in-simulation

# Build
1. git clone the repo
```
git clone https://github.com/annapecini/behavior-tree-ROS2.git
```

2. Install dependencies
```
source /opt/ros/<ROS2_DISTRO>/setup.bash
cd ~/behavior-tree-ROS2
rosdep install --from-paths src --ignore-src -r -y
```

3. Build
```
colcon build --symlink-install
```
# Usage
* Open 1st terminal and run mememan world.
```
source /opt/ros/<ROS2_DISTRO>/local_setup.bash
source ~/neuronbot2_ros2_ws/install/local_setup.bash
ros2 launch neuronbot2_gazebo neuronbot2_world.launch.py world_model:=mememan_world.model
```

* Open 2nd terminal and run navigation.
```
source /opt/ros/<ROS2_DISTRO>/local_setup.bash
source ~/neuronbot2_ros2_ws/install/local_setup.bash
ros2 launch neuronbot2_nav bringup_launch.py map:=$HOME/neuronbot2_ros2_ws/src/neuronbot2/neuronbot2_nav/map/mememan.yaml open_rviz:=true use_sim_time:=true
```

* Open 3rd termainal and run BT.
```
source /opt/ros/<ROS2_DISTRO>/local_setup.bash
source ~/behavior-tree-ROS2/install/local_setup.bash
ros2 launch bt_ros2 bt_ros2.launch.py
```
