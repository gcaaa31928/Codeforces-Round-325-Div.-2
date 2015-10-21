cmake_minimum_required(VERSION 3.3)
project(325)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES A.cpp)
add_executable(325 ${SOURCE_FILES})