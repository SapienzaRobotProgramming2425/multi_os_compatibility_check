cmake_minimum_required(VERSION 3.8)
project(01_simple)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wpedantic")

add_executable(01_simple src/main.cpp)
target_include_directories(01_simple PRIVATE include)
