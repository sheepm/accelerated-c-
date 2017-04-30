cmake_minimum_required(VERSION 3.7)
project(chapter6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp algorithm_.h algorithm_.cpp grade.cpp grade.h student_info.cpp student_info.h analysis.cpp analysis.h median.h median.cpp)
add_executable(chapter6 ${SOURCE_FILES})