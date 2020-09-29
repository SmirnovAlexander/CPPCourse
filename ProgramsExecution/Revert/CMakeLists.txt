cmake_minimum_required(VERSION 3.18 FATAL_ERROR)

SET(CMAKE_CXX_STANDARD 11)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Revert)

add_executable(revert src/main.cpp src/revert.cpp)
