#!/bin/bash
cd 01_simple
./run.sh 2>&1 | tee ../01_simple.log
cd ..
cd 02_eigen_cv
./run.sh 2>&1 | tee ../02_eigen_cv.log
cd ..
cd 03_ros
colcon build --symlink-install 2>&1 | tee ../03_ros.log
cd ..
