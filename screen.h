//
// Created by Diego on 20/09/2021.
//

#ifndef CRAZY_BREAKOUT_SCREEN_H
#define CRAZY_BREAKOUT_SCREEN_H

#include <SFML/Graphics.hpp>


using namespace sf;
class screen {

public:
    screen(int resolutionX, int resolutionY, std::string tittle);
    void draw();
    void loop();
private:
    RenderWindow * window1;
    int fps;
    RectangleShape * p1;

};


#endif //CRAZY_BREAKOUT_SCREEN_H
