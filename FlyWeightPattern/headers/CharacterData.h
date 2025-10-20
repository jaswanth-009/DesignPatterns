//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef FLYWEIGHTPATTERN_CHARACTERDATA_H
#define FLYWEIGHTPATTERN_CHARACTERDATA_H

#include "CharacterRenderer.h"
#include <string.h>
#include <string>

class CharacterData: public CharacterRenderer {
private:
    char ch;
    std::string fontName;
    int fontSize;

public:
    CharacterData(char ch, std::string fontName, int fontSize);
    ~CharacterData() = default;

    void draw(int x, int y) override;

};
#endif //FLYWEIGHTPATTERN_CHARACTERDATA_H