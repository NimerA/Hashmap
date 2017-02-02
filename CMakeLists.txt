cmake_minimum_required(VERSION 3.6)
project(Mapas)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Map.cpp Map.h Test.cpp Test.h)
add_executable(Mapas ${SOURCE_FILES})