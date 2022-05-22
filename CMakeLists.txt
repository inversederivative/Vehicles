cmake_minimum_required(VERSION 3.22)
project(Vehicles)

set(CMAKE_CXX_STANDARD 14)

add_executable(Vehicles main.cpp Car.cpp Car.h Vehicle.cpp Vehicle.h Truck.cpp Truck.h Catch_tests/TestTest.cpp)
add_subdirectory(Catch_tests)
