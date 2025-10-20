//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef FLYWEIGHTPATTERN_CHARACTERFACTORY_H
#define FLYWEIGHTPATTERN_CHARACTERFACTORY_H

#include <unordered_map>

#include "CharacterData.h"
#include <unordered_map>

class CharacterFactory {
private:
    std::unordered_map<std::string, CharacterRenderer*> chFactory;
public:
    CharacterRenderer* getCharacter(std::string fontName, char ch, int fontSize);
    ~CharacterFactory();
    size_t getUniqueCharacters();
};
#endif //FLYWEIGHTPATTERN_CHARACTERFACTORY_H