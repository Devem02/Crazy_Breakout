cmake_minimum_required(VERSION 3.20)
project(Crazy_Breakout)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

find_package(SFML COMPONENTS system window graphics)

add_executable(Crazy_Breakout main.cpp Server.cpp Server.h Cliente.cpp Cliente.h mainCliente.cpp InGame/screen.cpp InGame/screen.h InGame/gameBar.cpp InGame/gameBar.h InGame/gameBall.cpp InGame/gameBall.h InGame/brick.cpp InGame/brick.h InGame/brickFactory.cpp InGame/brickFactory.h)


TARGET_LINK_LIBRARIES(Crazy_Breakout sfml-system sfml-window sfml-graphics)

