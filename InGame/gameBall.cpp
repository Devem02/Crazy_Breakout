//
// Created by Diego on 24/09/2021.
//

#include "gameBall.h"


 gameBall::gameBall(float posX, float posY, float speed) {
    Pball.setRadius(5.f);
    Pball.setOrigin(5.f, 5.f);
    Pball.setPosition(posX, posY);
    Pball.setFillColor(Color::White);

    this->speed = speed;
    gameBall::move = false;
    deepValue = 0;
    upper = true;
    Right = true;
}
void gameBall::ballMovement(float initPosX, float initPosY) {
    if (move) {
        if (Pball.getPosition().x < 800 - Pball.getRadius() && Right) {
            Pball.move(speed, 0.f);
            if (Pball.getPosition().x >= 800 - Pball.getRadius()) {
                Pball.setPosition(800.f - Pball.getRadius(), Pball.getPosition().y);
                Right = false;
            }
        }
        else if (Pball.getPosition().x > 0 + Pball.getRadius() && !Right) {
            Pball.move(-speed, 0.f);
            if (Pball.getPosition().x <= 0 + Pball.getRadius()) {
                Pball.setPosition(0.f + Pball.getRadius(), Pball.getPosition().y);
                Right = true;
            }
        }
        if (Pball.getPosition().y > 0 + Pball.getRadius() && upper) {
            Pball.move(0.f, -speed);
            if (Pball.getPosition().y <= 0 + Pball.getRadius()) {
                Pball.setPosition(Pball.getPosition().x, 0.f + Pball.getRadius());
                upper = false;
            }
        }
        else if (Pball.getPosition().y < 600 - Pball.getRadius() && !upper) {
            Pball.move(0.f, speed);
        }
    }
    else {
        Pball.setPosition(initPosX, initPosY - 15);
    }
}
void gameBall::reset(float x, float y) {
    Pball.setPosition(x, y);
    move = false;
}

void gameBall::Initmovement() {
    move = true;
}

void gameBall::init(bool start) {
    upper = start;
}

CircleShape gameBall::ball(){
    return Pball;
}
void gameBall::direction() {
    if (upper){
        upper = false;

    }
    else{
        upper = true;
    }
}
void gameBall::getDeep() {
    deepValue ++;
}
