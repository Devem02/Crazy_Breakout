//
// Created by umi on 28/9/21.
//

#ifndef CRAZY_BREAKOUT_BRICKFACTORY_H
#define CRAZY_BREAKOUT_BRICKFACTORY_H

#endif //CRAZY_BREAKOUT_BRICKFACTORY_H

#include "brick.h"

class brickFactory {
public:
    static Brick * commonBrick(int posX, int posY);
    static Brick * doubleBrick(int posX, int posY);
    static Brick * tripleBrick(int posX, int posY);
    static Brick * internalBrick(int posX, int posY);
    static Brick * deepBrick(int posX, int posY);
    static Brick * specialBrick(int posX, int posY);

private:
    static void drawBlock(Brick* brick,sf::Color base, sf::Color board );
};