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

void screen::startPoints() {
    gamePoints.setPosition(10,500);
    gamePoints.setFillColor(Color::White);
    gamePoints.setString("Puntos: "+ std::to_string(currentPoints));

    gameover.setPosition(800.f/4, 600.f/4);
    gameover.setFillColor(Color::White);
    gameover.setString("Game Over!!!");
}

void screen::createBricks() {
    int counter = 0;
    float X = 80;
    float Y = 0;
    for (auto & b : brick) {
        int rand_block = 1 + (rand() % 6);
        X += 50;
        if (counter % 15 == 0) {
            X = 80;
            Y += 50;
        }
        if (rand_block == 1) {
            b = brickFactory::commonBrick(X, Y);
        }
        else if (rand_block == 2) {
            b = brickFactory::doubleBrick(X, Y);
        }
        else if (rand_block == 3){
            b = brickFactory::tripleBrick(X, Y);
        }
        else if (rand_block == 4){
            b = brickFactory::internalBrick(X, Y);
        }
        else {
            b = brickFactory::specialBrick(X, Y);
        }
        counter++;
    }
}
void screen::special() {
    int random = 1 + (rand() % 2);
    if (random == 1){
        ball->speed = 7.5f;
    }
    else if(random == 2){
        ball->speed = 2.4f;
    }
}
void screen::failBall() {
    if (ball->ball().getPosition().y > 550){
        ball->reset(bar.getPlayer().getPosition().x, bar.getPlayer().getPosition().y);
        lives --;
    }

}
bool screen::isRunning() {
    return window1->isOpen();
};
void screen::event() {
    while (window1->pollEvent(ev)){
        if (ev.type == Event::Closed){
            window1->close();
            break;
        }
    }
}
void screen::updateK() {
    if(!gameOver){
        if (Keyboard::isKeyPressed(Keyboard::Left)){
            bar.move(0);
        }
        if (Keyboard::isKeyPressed(Keyboard::Right)){
            bar.move(1);
        }
        if (Keyboard::isKeyPressed(Keyboard::Space)){
            ball->Initmovement();
        }
    }
}
void screen::updateBall() {
    if(ball->ball().getGlobalBounds().intersects(bar.getPlayer().getGlobalBounds())){
        ball->init(true);
    }
    if (ball->ball().getPosition().y >=550 - ball->ball().getRadius()){
        failBall();
        ball->ballMovement(bar.getPlayer().getPosition().x, bar.getPlayer().getPosition().y);
        ball->reset(bar.getPlayer().getPosition().x, bar.getPlayer().getPosition().y);
    }
    ball->ballMovement(bar.getPlayer().getPosition().x, bar.getPlayer().getPosition().y);
}
void screen::updateBrick() {
    for (Brick* b : brick) {
        if (this->ball->ball().getGlobalBounds().intersects(b->brickShape.getGlobalBounds())) {
                if (b->alive) {
                    if (b->getInternal()) {
                        ball->deepValue==0;
                        updatePoints(b->getPoints());
                        b->brickShape.setFillColor(Color::Transparent);
                        b->brickShape.setOutlineColor(Color::Transparent);
                        ball->init(false);
                    }
                    else {
                        b->hit();
                        if (b->getHp() < 0) {
                            if (b->getSurprise()){
                                special();
                            }
                            b->destroyed();
                            updatePoints(b->getPoints());
                            b->brickShape.setFillColor(Color::Transparent);
                            b->brickShape.setOutlineColor(Color::Transparent);
                        }
                        ball->init(false);
                    }

            }
        }
    }
}

void screen::updatePoints(int points) {
    currentPoints = points;
    gamePoints.setString("Puntos:" + std::to_string(currentPoints));
}
void screen::getLives() {
    if(lives == 0){
        gameOver = true;
    }
}
void screen::update() {
    event();
    updateK();
    failBall();
    updateBrick();
    //updateBall();
    getLives();
}
void screen::generate() {
    window1 -> clear(Color::Black);

    for (Brick* brick : brick){
        window1->draw(brick->brickShape);
    }
    if(gameOver){
        window1->draw(gameover);
    }
    window1->draw(ball->ball());
    window1->draw(bar.getPlayer());
    window1->draw(gamePoints);

    window1->display();
}