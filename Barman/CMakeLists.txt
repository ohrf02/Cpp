cmake_minimum_required(VERSION 3.8)
project(Barman)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Drink.cpp Drink.h Beer.cpp Beer.h Wine.cpp Wine.h RedWine.cpp RedWine.h WhiteWine.cpp WhiteWine.h)
add_executable(Barman ${SOURCE_FILES})