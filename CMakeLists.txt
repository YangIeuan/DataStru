cmake_minimum_required(VERSION 3.20.0)

project(Stru CXX)

set(CMAKE_CXX_STANDARD 11)

# set(CMAKE_BUILD_TYPE Debug)

set(TARGET ${PROJECT_NAME})

include_directories(${PROJECT_SOURCE_DIR}/inc)

add_executable(${TARGET} main.cpp)

add_subdirectory(src)
add_subdirectory(tests)