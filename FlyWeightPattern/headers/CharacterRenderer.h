//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef FLYWEIGHTPATTERN_CHARACTERRENDERER_H
#define FLYWEIGHTPATTERN_CHARACTERRENDERER_H

class CharacterRenderer {
    public:
        ~CharacterRenderer() = default;
        virtual void draw(int x, int y) = 0;
};

#endif //FLYWEIGHTPATTERN_CHARACTERRENDERER_H