/**
* @file gameBar.h
* @version 1.0
* @date 21/09/2021
* @title Objeto de la Barra de juego
*/

#ifndef CRAZY_BREAKOUT_GAMEBAR_H
#define CRAZY_BREAKOUT_GAMEBAR_H

#include <SFML/Graphics.hpp>


using namespace sf;

//Clase de la Barra de juego
class gameBar {

public:
    gameBar();
    RectangleShape getPlayer();
    void move(int way);

private:
    RectangleShape bar;



};


#endif //CRAZY_BREAKOUT_GAMEBAR_H
