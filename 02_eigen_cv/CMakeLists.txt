cmake_minimum_required(VERSION 3.8)
project(02_eigen)

set(CMAKE_CXX_STANDARD 11)

find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(camera src/camera.cpp)
target_include_directories(camera PUBLIC include)
target_link_libraries(camera Eigen3::Eigen)

add_executable(main src/main.cpp)
target_include_directories(main PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(main camera ${OpenCV_LIBS})
