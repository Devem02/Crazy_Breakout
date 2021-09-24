//
// Created by Diego on 24/09/2021.
//

#include "gameBar.h"

gameBar::gameBar() {

    bar.setSize(Vector2f(115, 15));
    bar.setFillColor(Color::White);
    bar.setOrigin(50, 10);
    bar.setPosition(400, 550);
}
void gameBar::move(int way) {
    if (way == 0) {
        if (bar.getPosition().x <= 50) {
            bar.setPosition(50.f, 550.f);
        }
        bar.move(-7.f, 0.f);
    }
    else if (way == 1) {
        if (bar.getPosition().x >= 750) {
                bar.setPosition(750.f, 550.f);
        }
        bar.move(7.f, 0.f);
    }

}
RectangleShape gameBar::getPlayer() {
    return bar;
}
