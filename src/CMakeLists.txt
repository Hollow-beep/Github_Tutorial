cmake_minimum_required(VERSION 3.23.0)
set( CMAKE_CXX_COMPILER "C:/mingw64/bin/g++.exe" )
set( CMAKE_C_COMPILER "C:/mingw64/bin/gcc.exe" )
#Include path to header file
include_directories("D:/MyProject/codeLearn/Header/Include")

project(codeLearn)

set(SOURCE main.cpp Point.cpp PolyLine.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})