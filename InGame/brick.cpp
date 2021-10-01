//
// Created by umi on 28/9/21.
//

#include "brick.h"

Brick::Brick(int posX, int posY, int points, int hp, bool internal, bool deep, bool surprise) {
    this->posX = posX;
    this->posY = posY;
    this->points = points;
    this->hp = hp;
    this->internal = internal;
    this->deep = deep;
    this->alive = true;
}

int Brick::getPosX() const {
    return this->posX;
}

int Brick::getPosY() const {
    return this->posY;
}

int Brick::getPoints() const {
    return this->points;
}

int Brick::getHp() const {
    return this->hp;
}

bool Brick::getInternal() const {
    return this->internal;
}

bool Brick::getDeep() const {
    return this->deep;
}

bool Brick::getSurprise() const {
    return surprise;
}

void Brick::destroyed() {
    this->alive = false;
}
void Brick::hit() {
    this->hp --;
}