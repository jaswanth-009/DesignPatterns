//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#include "headers/TextEditor.h"
#include <iostream>

TextEditor::TextEditor() {
    content = "";
}

TextEditor::~TextEditor() {

}

TextEditor::TextEditor(std::string content) {
    this->content = content;
}

TextEditorMomento TextEditor::save() {
    return TextEditorMomento(content);
}

void TextEditor::printContent() {
    std::cout << content << "\n";
}

void TextEditor::addText(std::string content) {
    this->content += std::string(content);
}

void TextEditor::addText(const char* data) {
    this->content += std::string(data);
}

void TextEditor::restore(TextEditorMomento &momento) {
    this->content = momento.getState();
}
