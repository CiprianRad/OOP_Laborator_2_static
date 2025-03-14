cmake_minimum_required(VERSION 3.30)
project(Laborator_2_static)

set(CMAKE_CXX_STANDARD 20)

add_executable(Laborator_2_static main.cpp
        ui.h
        ui.cpp
        service.h
        service.cpp)
