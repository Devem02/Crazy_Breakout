//
// Created by Diego on 24/09/2021.
//

#ifndef CRAZY_BREAKOUT_GAMEBAR_H
#define CRAZY_BREAKOUT_GAMEBAR_H

#include <SFML/Graphics.hpp>


using namespace sf;
class gameBar {

public:
    gameBar();
    RectangleShape getPlayer();
    void move(int way);

private:
    RectangleShape bar;



};


#endif //CRAZY_BREAKOUT_GAMEBAR_H
