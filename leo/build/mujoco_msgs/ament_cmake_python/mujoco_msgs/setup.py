from setuptools import find_packages
from setuptools import setup

setup(
    name='mujoco_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('mujoco_msgs', 'mujoco_msgs.*')),
)
