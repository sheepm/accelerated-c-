cmake_minimum_required(VERSION 3.7)
project(chapter4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp median.h student_info.h grade.h student_info.cpp grade.cpp median.cpp)
add_executable(chapter4 ${SOURCE_FILES})