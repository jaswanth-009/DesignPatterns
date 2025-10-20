#include <iostream>
#include "headers/TextEditor.h"

int main() {
    std::cout << "--FlyWeight Patten--" << std::endl;

    CharacterFactory* fac = new CharacterFactory();
    TextEditor* editor = new TextEditor(fac);

    editor->addCharacter('J', "Arial", 20, 1,1);
    editor->addCharacter('a', "Arial", 20, 2,1);
    editor->addCharacter('s', "Arial", 20, 3,1);
    editor->addCharacter('w', "Arial", 20, 4,1);
    editor->addCharacter('a', "Arial", 20, 5,1);
    editor->addCharacter('n', "Arial", 20, 6,1);
    editor->addCharacter('t', "Arial", 20, 7,1);
    editor->addCharacter('h', "Arial", 20, 8,1);

    editor->printDocument();

    editor->addCharacter(' ', "Arial", 20, 9,1);
    editor->addCharacter('!', "Arial", 20, 10,1);
    editor->addCharacter('!', "Arial", 20, 11,1);

    editor->printDocument();

    delete fac, editor;
    return 0;
}