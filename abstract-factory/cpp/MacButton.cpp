#include "MacButton.h"

#include <iostream>

MacButton::~MacButton() {
    std::cout << "Destructing a Mac button";
    return;
}

void MacButton::Init() {
    std::cout << "Initialising a Mac button";
}

void MacButton::Render() {
    std::cout << "Rendering a Mac button";
}

void MacButton::SetTitle(std::string _title) {
    title = _title;
}
