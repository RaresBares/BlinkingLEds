cmake_minimum_required(VERSION 3.13)
project(untitled18)
set(CMAKE_CXX_FLAGS "-lwiringPi -pthread" )
set(CMAKE_CXX_STANDARD 14)
INCLUDE(CMakeForceCompiler)
CMAKE_FORCE_C_COMPILER(gcc GNU)
CMAKE_FORCE_CXX_COMPILER(g++ GNU)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


add_executable(untitled18 main.cpp)