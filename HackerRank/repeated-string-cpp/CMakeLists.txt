cmake_minimum_required(VERSION 3.5)
project(repeated_string_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(repeated_string_cpp ${SOURCE_FILES})