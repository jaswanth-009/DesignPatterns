#include <iostream>
#include "headers/TextEditor.h"
#include "headers/TextEditorUndoManager.h"

int main() {
    std::cout << "---Momento Pattern---" << std::endl;

    TextEditor* editor = new TextEditor();
    TextEditorUndoManager* mgr = new TextEditorUndoManager(editor);

    editor->addText("Holaa!!");
    editor->printContent();

    editor->addText(" Gomostaas!!!");
    mgr->save();

    editor->printContent();
    editor->addText(" Expecting to be removed!!");
    editor->printContent();
    mgr->undo();
    editor->printContent();

    delete editor, mgr;
    return 0;
}