#include "WinButton.h"

#include <iostream>

WinButton::~WinButton() {
    std::cout << "Destructing a Win button";
    return;
}

void WinButton::Init() {
    std::cout << "Initialising a Win button";
}

void WinButton::Render() {
    std::cout << "Rendering a Win button";
}

void WinButton::SetTitle(std::string _title) {
    title = _title;
}
