//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#include "headers/TextEditorUndoManager.h"

#include <iostream>
#include <ostream>

TextEditorUndoManager::TextEditorUndoManager(TextEditor *editor) {
    this->editor = editor;
}

void TextEditorUndoManager::save() {
    st.push(this->editor->save());
}

void TextEditorUndoManager::undo() {
    if (st.empty()) {
        std::cout << "Nothing is saved to restore\n";
        return;
    }

    this->editor->restore(st.top());
    st.pop();
}

