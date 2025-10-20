//
// Created by Jassvanthh Kunjeti on 29/08/25.
//

#ifndef BRIDGEPATTERN_RASTERRENDERER_H
#define BRIDGEPATTERN_RASTERRENDERER_H

#include "Renderer.h"

class RasterRenderer: public Renderer {
public:
    void drawCircle() override;
    void drawRectangle() override;
};

#endif //BRIDGEPATTERN_RASTERRENDERER_H