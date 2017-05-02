cmake_minimum_required(VERSION 3.7)
project(chapter9)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Student_info.cpp Student_info.h)
add_executable(chapter9 ${SOURCE_FILES})