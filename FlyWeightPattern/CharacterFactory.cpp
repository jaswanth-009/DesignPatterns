//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#include "headers/CharacterFactory.h"

CharacterRenderer *CharacterFactory::getCharacter(std::string fontName, char ch, int fontSize) {
    std::string key = fontName + "_" + std::to_string(fontSize);
    key.push_back('_');
    key.push_back(ch);
    if (chFactory.count(key))
        return chFactory[key];
    CharacterRenderer* newChar = new CharacterData(ch, fontName, fontSize);
    chFactory[key] = newChar;
    return newChar;
}

size_t CharacterFactory::getUniqueCharacters() {
    return chFactory.size();
}

CharacterFactory::~CharacterFactory() {
    for (auto& [key, character] : chFactory) {
        delete character;
    }
}
