//
// Created by umi on 28/9/21.
//

#ifndef CRAZY_BREAKOUT_BRICK_H
#define CRAZY_BREAKOUT_BRICK_H

#endif //CRAZY_BREAKOUT_BRICK_H

using namespace std;

class Brick {
private:
    int posX;
    int posY;
    int points;
    int hp;
    bool internal;
    bool deep;
    bool surprise;
    bool alive;
public:
    Brick(int PosX, int PosY, int Points, int hp, bool internal, bool deep, bool surprise);
    int getPosX() const;
    int getPosY() const;
    int getPoints() const;
    int getHp() const;
    bool getInternal() const;
    bool getDeep() const;
    bool getSurprise() const;
    void destroyed();
};