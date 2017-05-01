cmake_minimum_required(VERSION 3.7)
project(chapter8)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp generic.cpp generic.h)
add_executable(chapter8 ${SOURCE_FILES})