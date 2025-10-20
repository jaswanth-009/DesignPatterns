//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef MOMENTOPATTERN_TEXTEDITORMOMENTO_H
#define MOMENTOPATTERN_TEXTEDITORMOMENTO_H
#include <string>

class TextEditorMomento {
    private:
        std::string state;
    public:
        TextEditorMomento(std::string content);
        std::string getState();

};

#endif //MOMENTOPATTERN_TEXTEDITORMOMENTO_H