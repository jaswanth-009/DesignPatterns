//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#ifndef BRIDGEPATTERN_SHAPE_H
#define BRIDGEPATTERN_SHAPE_H

#include "Renderer.h"

class Shape
{
    public:
        Renderer* renderer;
        virtual void draw() = 0;
        virtual void setRenderer(Renderer* renderer) = 0;
};
#endif //BRIDGEPATTERN_SHAPE_H