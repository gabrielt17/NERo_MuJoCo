import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/workspaces/ros_humble_mujoco_leo/leo/install/aerial_system_mujoco'
