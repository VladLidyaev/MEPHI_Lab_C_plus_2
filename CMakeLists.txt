cmake_minimum_required(VERSION 3.17)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2 main.cpp Tools.cpp Tools.h LineClass.h LineClass.cpp)
#add_executable(leastSquareFitting main.cpp Tools.cpp LineClass.cpp)