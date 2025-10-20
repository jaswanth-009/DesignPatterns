//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef FLYWEIGHTPATTERN_TEXTEDITOR_H
#define FLYWEIGHTPATTERN_TEXTEDITOR_H

#include <vector>
#include "CharacterRenderer.h"
#include "CharacterFactory.h"

class TextEditor {
public:
        TextEditor(CharacterFactory* cf);
        ~TextEditor();
        void addCharacter(char ch, std::string fontName, int fontSize, int x, int y);
        void printDocument();

        class StorageMinimizer {
                private:
                        CharacterRenderer* renderer;
                        int x,y;
                public:
                        StorageMinimizer(CharacterRenderer* renderer, int x, int y);
                        void draw();
        };
private:
        std::vector<StorageMinimizer*> document;
        CharacterFactory* factory;
};

#endif //FLYWEIGHTPATTERN_TEXTEDITOR_H