//
// Created by Jassvanthh Kunjeti on 30/08/25.
//

#ifndef MOMENTOPATTERN_TEXTEDITORUNDOMANAGER_H
#define MOMENTOPATTERN_TEXTEDITORUNDOMANAGER_H

#include "TextEditor.h"
#include <stack>

class TextEditorUndoManager {
    private:
        std::stack<TextEditorMomento> st{};
        TextEditor *editor;
    public:
        TextEditorUndoManager(TextEditor *editor);
        void save();
        void undo();
};

#endif //MOMENTOPATTERN_TEXTEDITORUNDOMANAGER_H