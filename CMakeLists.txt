cmake_minimum_required(VERSION 3.6)
project(Byte_World)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp src/abstract/world.cpp headers/abstract/world.h src/abstract/sector.cpp headers/abstract/sector.h src/utils/hashkey.cpp headers/utils/hashkey.h)
add_executable(Byte_World ${SOURCE_FILES})