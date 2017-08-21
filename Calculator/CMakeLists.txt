cmake_minimum_required(VERSION 3.8)
project(Calculator)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp calculatorOperation.cpp calculatorOperation.h Addition.cpp Addition.h Subtraction.cpp Subtraction.h)
add_executable(Calculator ${SOURCE_FILES})