/*====================================================================================
Copyright (c) 2015 Barry Carter <barry.carter@gmail.com>


Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

A simple GUI Widget library for TFT screens. 
====================================================================================
*/

#include "GuiLibrary.h"

void GuiMultiLineTextBox::addChild(GuiElement *child) {
    // remap the x and y of the child
    child->y = totalHeight + child->margin;
    totalHeight = child->y + child->height + child->margin;
    height = totalHeight;
    GuiElement::addChild(child);
};

void GuiMultiLineTextBox::addLine(char const* text) {
    GuiLabel *label = new GuiLabel(0, 0, width - padding, 10, text);   
    label->fontSize(1);
    addChild(label);
    draw();
}

void GuiMultiLineTextBox::clear(void) {
    // delete all child nodes
    //TODO
}
