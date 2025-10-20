//
// Created by Jassvanthh Kunjeti on 30/08/25.
//
#include "headers/TextEditor.h"
#include <iostream>

TextEditor::StorageMinimizer::StorageMinimizer(CharacterRenderer *renderer, int x, int y) {
    this->renderer = renderer;
    this->x = x;
    this->y = y;
}

void TextEditor::StorageMinimizer::draw() {
    this->renderer->draw(this->x, this->y);
}

TextEditor::TextEditor(CharacterFactory *cf) {
    this->factory = cf;
}

void TextEditor::addCharacter(char ch, std::string fontName, int fontSize, int x, int y) {
    CharacterRenderer* character = factory->getCharacter(fontName, ch, fontSize);

    StorageMinimizer* st = new StorageMinimizer(character, x, y);
    document.push_back(st);
}

void TextEditor::printDocument() {
    for (int i = 0; i < document.size(); i++) {
        StorageMinimizer* st = document[i];
        st->draw();
    }
    std::cout << "Used " << factory->getUniqueCharacters() << " unique charaters\n";
}

TextEditor::~TextEditor() {
    for (auto& st : document) {
        delete st;
    }
}
