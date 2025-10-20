//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#include "headers/TextEditorMomento.h"

TextEditorMomento::TextEditorMomento(std::string content) {
    this->state = content;
}

std::string TextEditorMomento::getState() {
    return state;
}
