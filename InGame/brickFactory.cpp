//
// Created by umi on 28/9/21.
//

#include "brickFactory.h"

Brick* brickFactory::commonBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 10, 1, false, false, false);
    return brick;
}

Brick* brickFactory::doubleBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 15, 2, false, false, false);
    return brick;
}

Brick* brickFactory::tripleBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 20, 3, false, false, false);
    return brick;
}

Brick* brickFactory::internalBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 30, 1, true, false, false);
    return brick;
}

Brick* brickFactory::deepBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 0, 1, false, true, false);
    return brick;
}

Brick* brickFactory::surpriseBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 0, 1, false, false, true);
    return brick;
}