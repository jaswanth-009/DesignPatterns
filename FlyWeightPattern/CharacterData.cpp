//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#include "headers/CharacterData.h"
#include <iostream>

CharacterData::CharacterData(char ch, std::string fontName, int fontSize) {
    this->ch = ch;
    this->fontName = fontName;
    this->fontSize = fontSize;
}

void CharacterData::draw(int x, int y) {
    std::cout << "Character: " << ch << " with fontName: " << fontName << " with fontSize: "
        << fontSize << "at " << "(" << x << "," << y << ")\n";
}

