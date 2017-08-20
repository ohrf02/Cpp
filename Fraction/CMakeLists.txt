cmake_minimum_required(VERSION 3.8)
project(Fraction)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Fraction.cpp Fraction.h)
add_executable(Fraction ${SOURCE_FILES})