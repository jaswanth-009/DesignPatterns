cmake_minimum_required(VERSION 4.0)
project(BridgePattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(BridgePattern main.cpp
        Circle.cpp
        Rectangle.cpp
        RasterRenderer.cpp
        VectorRenderer.cpp)
