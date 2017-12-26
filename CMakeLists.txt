cmake_minimum_required(VERSION 3.9)
project(example_rangev3)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_CXX_STANDARD 11)

include(${PROJECT_SOURCE_DIR}/cmake/External_RangeV3.cmake)

message(STATUS "0000000 ${RangeV3_INCLUDE_DIR}")
add_executable(example_rangev3 main.cpp)
target_include_directories(example_rangev3 PRIVATE ${RangeV3_INCLUDE_DIR})

add_dependencies(example_rangev3 RangeV3)