//
// Created by Diego on 20/09/2021.
//

#include "screen.h"

screen::screen(int resolutionX, int resolutionY, std::string tittle)
{
    fps = 60;
    window1 = new RenderWindow(VideoMode(800, 600), tittle);
    window1 ->setFramerateLimit(fps);

    p1 = new RectangleShape({150, 10});
    p1 ->setFillColor(Color::White);
    p1 -> setPosition(315, 500);

    loop();
}
void screen::draw(){

    window1->clear();
    window1->draw(*p1);
    window1->display();
}
void screen::loop(){

    while(window1->isOpen()){
        draw();
    }
}