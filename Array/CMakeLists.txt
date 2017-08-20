cmake_minimum_required(VERSION 3.8)
project(Array)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp ProtectedArray.h)
add_executable(Array ${SOURCE_FILES})