/**
* @file gameBall.h
* @version 1.0
* @date 21/09/2021
* @title Objeto de las Bolas
*/

#ifndef CRAZY_BREAKOUT_GAMEBALL_H
#define CRAZY_BREAKOUT_GAMEBALL_H

#include <SFML/Graphics.hpp>
#include "gameBar.h"
#include "math.h"


class gameBall {

public:
    /**
     * @param posX Posicion en X de la Bola
     * @param posY Posicion en Y de la Bola
     * @param speed Velocidad de la Bola
     */
    gameBall(float posX, float posY,float speed);

    /**
     *@return Inicia el movimiento de la Bola
     */
    void Initmovement();

    /**
     * @param x Movimiento de la bola en X
     * @param y Movimiento de la bola en Y
     */
    void ballMovement(float x, float y);
    CircleShape ball();

    /**
     * @param start Avisa el inicio del movimiento
     */
    void init(bool start);

    /**
     * @param x Reinicia la posicion de la Bola en X
     * @param y Reinicia la posicion de la Bola en Y
     */
    void reset(float x, float y);
    int deepValue;

    /**
     * @return Obtiene si la Bola tiene profundidad
     */
    void getDeep();

    /**
     * @return Da la direccion de la Bola
     */
    void direction();

    /**
     * @return Mueve la Bola hacia arriba
     */
    void up();
    float speed;

private:
    CircleShape Pball;
    bool move;
    bool upper;
    bool Right;
};


#endif //CRAZY_BREAKOUT_GAMEBALL_H
