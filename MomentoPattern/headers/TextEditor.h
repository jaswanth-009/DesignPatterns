//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef MOMENTOPATTERN_TEXTEDITOR_H
#define MOMENTOPATTERN_TEXTEDITOR_H

#include <string>
#include "TextEditorMomento.h"

class TextEditor {
    private:
        std::string content;
    public:
        TextEditor();
        TextEditor(std::string content);
        ~TextEditor();
        void addText(std::string content);
        void addText(const char* data);
        void restore(TextEditorMomento &momento);
        TextEditorMomento save();
        void printContent();

};
#endif //MOMENTOPATTERN_TEXTEDITOR_H