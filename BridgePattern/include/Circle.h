//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#ifndef BRIDGEPATTERN_CIRCLE_H
#define BRIDGEPATTERN_CIRCLE_H

#include "Shape.h"
class Circle : public Shape {
    private:
        double r;
    public:
        Circle(double radius);
        void draw() override;
        void setRenderer(Renderer* renderer) override;
};


#endif //BRIDGEPATTERN_CIRCLE_H