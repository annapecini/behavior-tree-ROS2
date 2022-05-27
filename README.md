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
