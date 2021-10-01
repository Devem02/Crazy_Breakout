/**
 * @file brick.h
 * @version 1.0
 * @date 21/09/2021
 * @title Objeto de los Bloques
 */

#ifndef CRAZY_BREAKOUT_BRICK_H
#define CRAZY_BREAKOUT_BRICK_H


#include <SFML/Graphics.hpp>

using namespace sf;

// clase Brick
class Brick {
private:
    int posX;
    int posY;
    int points;
    int hp;
    bool internal;
    bool deep;
    bool surprise;
public:
    /**
     * @param PosX Posicion en X del bloque
     * @param PosY Posicion en Y del bloque
     * @param Points Puntaje que otorga este bloque
     * @param hp Cantidad de golpes que aguanta el bloque
     * @param internal Permite saber si el bloque es interno
     * @param deep Permite saber si el bloque es profundo
     * @param surprise Permite saber si el bloque es sorpresa
     */
    Brick(int PosX, int PosY, int Points, int hp, bool internal, bool deep, bool surprise);

    /**
     * @return Retorna la posicion en X
     */
    int getPosX() const;

    /**
     * @return Retorna la posicion en Y
     */
    int getPosY() const;

    /**
     * @return Retorna la cantidad de puntos obtenidos
     */
    int getPoints() const;

    /**
     * @return Retorna la cantidad de vida del bloque
     */
    int getHp() const;

    /**
     * @return Retorna si es un bloque interno
     */
    bool getInternal() const;

    /**
     * @return Retorna si es un bloque profundo
     */
    bool getDeep() const;

    /**
     * @return Retorna si es un bloque sorpresa
     */
    bool getSurprise() const;

    /**
     * @return Avisa si el bloque fue destruido
     */
    void destroyed();

    /**
     * @return Avisa si el bloque fue golpeado
     */
    void hit();

    /**
     * @return Avisa si el bloque sigue vivo
     */
    bool alive;
    RectangleShape brickShape;
};

#endif //CRAZY_BREAKOUT_BRICK_H