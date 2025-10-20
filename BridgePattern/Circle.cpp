//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#include "include/Circle.h"
#include <iostream>

Circle::Circle(double radius): r(radius) {
    std::cout << "Creating Circle of radius: " << radius << "\n";
}

void Circle::setRenderer(Renderer *renderer) {
    this->renderer = renderer;
}

void Circle::draw() {
    if (!renderer) {
        std::cerr << "No Renderer is set\n";
        return;
    }

    renderer->drawCircle();
}
