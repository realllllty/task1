cmake_minimum_required(VERSION 3.23)
project(task1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(task1
        application.h
        backtrack.cpp
        backtrack.h
        position.cpp
        main.cpp application.cpp)
