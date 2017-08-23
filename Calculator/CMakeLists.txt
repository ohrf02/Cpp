cmake_minimum_required(VERSION 3.8)
project(Calculator)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp calculatorOperation.h Addition.h Subtraction.h Sqrt.h Multiplication.h Division.h Power.h Set.h)
add_executable(Calculator ${SOURCE_FILES})