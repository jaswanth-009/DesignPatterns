cmake_minimum_required(VERSION 4.0)
project(FlyWeightPattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(FlyWeightPattern main.cpp
        CharacterData.cpp
        CharacterFactory.cpp
        TextEditor.cpp)
