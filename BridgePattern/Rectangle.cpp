//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#include "include/Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double width, double height) : w(width), h(height) {
    std::cout << "Created a rectangle with width: " << w << " and height: " << h << "\n";
}

void Rectangle::setRenderer(Renderer *r) {
    this->renderer = r;
}

void Rectangle::draw() {
    if (!renderer) {
        std::cerr << "No renderer defined!\n";
        return;
    }

    this->renderer->drawRectangle();
}
