cmake_minimum_required(VERSION 3.17)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2 main.cpp Tools.cpp Tools.h LineClass.h LineClass.cpp Tests/tests.cpp)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

target_link_libraries(Lab2 gtest gtest_main)