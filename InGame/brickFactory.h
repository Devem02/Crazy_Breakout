/**
 * @file brickFactory.h
 * @version 1.0
 * @date 28/09/2021
 * @title Fabrica de distintos tipos de bloques
 */

#ifndef CRAZY_BREAKOUT_BRICKFACTORY_H
#define CRAZY_BREAKOUT_BRICKFACTORY_H

#include "brick.h"

//Clase de la fabrica de bloques
class brickFactory {
public:
    static Brick * commonBrick(int posX, int posY);
    static Brick * doubleBrick(int posX, int posY);
    static Brick * tripleBrick(int posX, int posY);
    static Brick * internalBrick(int posX, int posY);
    static Brick * deepBrick(int posX, int posY);
    static Brick * specialBrick(int posX, int posY);

private:
    /**
     * @param brick El objeto del bloque a dibujar
     * @param base Color del bloque
     * @param board Color del bloque
     */
    static void drawBlock(Brick* brick,sf::Color base, sf::Color board );
};

#endif //CRAZY_BREAKOUT_BRICKFACTORY_H