//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#ifndef BRIDGEPATTERN_VECTORRENDERER_H
#define BRIDGEPATTERN_VECTORRENDERER_H

#include "Renderer.h"

class VectorRenderer: public Renderer {
    public:
        void drawCircle() override;
        void drawRectangle() override;
};
#endif //BRIDGEPATTERN_VECTORRENDERER_H