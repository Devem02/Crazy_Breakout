//
// Created by Diego on 20/09/2021.
//

#include "screen.h"

screen::screen(int resolutionX, int resolutionY, std::string tittle)
{
    fps = 60;
    window1 = new RenderWindow(VideoMode(800, 600), tittle, Style::Close | Style::Titlebar);
    window1->setFramerateLimit(fps);
    while(window1->isOpen()){



    }


}
