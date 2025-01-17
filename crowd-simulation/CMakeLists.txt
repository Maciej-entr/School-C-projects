cmake_minimum_required(VERSION 3.10)

project(CrowdSimulation)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

file(GLOB SOURCES
    src/*.cpp
    src/utils/*.cpp
)

add_executable(crowd_simulation ${SOURCES})