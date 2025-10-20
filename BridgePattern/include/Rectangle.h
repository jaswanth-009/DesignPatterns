//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#ifndef BRIDGEPATTERN_RECTANGLE_H
#define BRIDGEPATTERN_RECTANGLE_H

#include "Shape.h"
class Rectangle : public Shape {
    private:
        double w,h;

    public:
        Rectangle(double width, double height);
        void setRenderer(Renderer *r) override;
        virtual void draw() override;
};

#endif //BRIDGEPATTERN_RECTANGLE_H