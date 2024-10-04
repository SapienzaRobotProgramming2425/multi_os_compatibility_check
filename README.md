# multi_os_compatibility_check
We will use this repository to verify that the minimum requirements for the homework assigments, challenge and optional project are satisfied with your laptop.
It includes different tests that are needed for us to grasp which points are critical for your own setup.

We will run three main experiments:
- Simple program built using CMake, containing one executable and one library object
- Simple program built using CMake with Eigen3 and OpenCV dependency (required for linear algebra and visualization)
- ROS2 Humble workspace to verify ROS2 compatibility

## Approaches

We should try at least two different modalities:
- Manually installing the dependencies (Eigen3 and ROS2-humble)
- Using [Pixi](https://prefix.dev/)
