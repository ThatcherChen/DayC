cmake_minimum_required(VERSION 3.22)
project(DayC)

set(CMAKE_CXX_STANDARD 14)

include_directories(header)

add_executable(DayC
        src/main.cpp src/Todo/Todo.cpp header/Todo/Todo.h src/Utility/FileProcess.cpp header/Utility/FileProcess.h)