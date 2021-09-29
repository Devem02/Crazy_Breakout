//
// Created by umi on 28/9/21.
//

#include "brickFactory.h"


using namespace sf;
void brickFactory::drawBlock(Brick *brick, sf::Color base, sf::Color board) {
    brick->brick.setSize(Vector2f(40.f, 20.f));
    brick->brick.setOrigin(20.f, 20.f);
    brick->brick.setPosition(brick->getPosX(), brick->getPosY());
    brick->brick.setFillColor(base);
    brick->brick.setOutlineColor(board);
    brick->brick.setOutlineThickness(2.f);

}

Brick* brickFactory::commonBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 10, 1, false, false, false);
    drawBlock(brick, Color(2, 62, 138), Color(211, 211, 211));
    return brick;
}

Brick* brickFactory::doubleBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 15, 2, false, false, false);
    drawBlock(brick, Color(43, 147, 72), Color(211, 211, 211));

    return brick;
}

Brick* brickFactory::tripleBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 20, 3, false, false, false);
    drawBlock(brick, Color(181, 4, 4), Color(211, 211, 211));
    return brick;
}

Brick* brickFactory::internalBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 30, 1, true, false, false);
    drawBlock(brick, Color(255, 121, 0), Color(211, 211, 211));
    return brick;
}

Brick* brickFactory::deepBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 0, 1, false, true, false);
    drawBlock(brick, Color(73, 80, 87), Color(211, 211, 211));
    return brick;
}

Brick* brickFactory::specialBrick(int posX, int posY) {
    auto* brick = new Brick(posX, posY, 0, 1, false, false, true);
    drawBlock(brick, Color(255, 214, 10), Color(211, 211, 211));
    return brick;
}