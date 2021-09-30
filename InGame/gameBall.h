//
// Created by Diego on 24/09/2021.
//

#ifndef CRAZY_BREAKOUT_GAMEBALL_H
#define CRAZY_BREAKOUT_GAMEBALL_H

#include <SFML/Graphics.hpp>
#include "gameBar.h"
#include "math.h"


class gameBall {

public:
    gameBall(float posX, float posY,float speed);
    void Initmovement();
    void ballMovement(float x, float y);
    CircleShape ball();
    void init(bool start);
    void reset(float x, float y);
    int deepValue;
    void getDeep();
    void direction();
    void up();
    float speed;

private:
    CircleShape Pball;
    bool move;
    bool upper;
    bool Right;
};


#endif //CRAZY_BREAKOUT_GAMEBALL_H
