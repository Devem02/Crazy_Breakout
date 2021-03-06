/**
* @file screen.h
* @version 1.0
* @date 28/09/2021
* @title Interfaz del juego
*/

#ifndef CRAZY_BREAKOUT_SCREEN_H
#define CRAZY_BREAKOUT_SCREEN_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <random>
#include <vector>
#include "brickFactory.h"
#include "gameBar.h"
#include "gameBall.h"
#include "brick.h"



using namespace sf;
class screen {

public:
    screen();
    ~screen();
    void failBall();
    void special();
    void event();
    void updateK();
    void updateBall();
    void updateBrick();
    void getLives();
    void updatePoints(int points);
    void update();
    void generate();
    bool isRunning();

private:
    RenderWindow* window1;
    int fps;
    Event ev;
    gameBall* ball;
    gameBar bar;
    Brick* brick[60];
    bool gameOver;
    float ballSpeed;
    int currentBalls;
    int currentPoints;
    int lives;
    Text gamePoints;
    Text gameover;
    Text deep;
    void startPoints();
    void createBricks();
};


#endif //CRAZY_BREAKOUT_SCREEN_H
