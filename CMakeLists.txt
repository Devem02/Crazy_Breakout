cmake_minimum_required(VERSION 3.20)
project(Crazy_Breakout)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)
add_executable(Crazy_Breakout main.cpp Server.cpp Server.h Cliente.cpp Cliente.h mainCliente.cpp)
