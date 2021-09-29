//
// Created by Diego on 20/09/2021.
//

#include "screen.h"

screen::screen()
{
    fps = 60;
    window1 = new RenderWindow(VideoMode(800, 600), "Crazy Breakouts", Style::Close | Style::Titlebar);
    window1->setFramerateLimit(fps);

    ball = new gameBall(bar.getPlayer().getPosition().x, bar.getPlayer().getPosition().y, 5.f);

    currentBalls = 1;
    currentPoints = 0;
    lives = 3;

    gameOver = false;

    startPoints();
    createBricks();
}

screen::~screen() {
    delete window1;
}

