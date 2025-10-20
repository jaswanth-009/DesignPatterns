cmake_minimum_required(VERSION 4.0)
project(MomentoPattern)

set(CMAKE_CXX_STANDARD 20)

add_executable(MomentoPattern main.cpp
        TextEditorMomento.cpp
        TextEditor.cpp
        TextEditorUndoManager.cpp)
