//
// Created by Diego on 20/09/2021.
//

#ifndef CRAZY_BREAKOUT_SCREEN_H
#define CRAZY_BREAKOUT_SCREEN_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <random>
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
    Text message;
    Text points;
    void startPoints();
    void createBricks();
};


#endif //CRAZY_BREAKOUT_SCREEN_H
