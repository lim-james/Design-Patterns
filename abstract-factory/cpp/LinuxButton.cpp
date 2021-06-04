#include "LinuxButton.h"

#include <iostream>

LinuxButton::~LinuxButton() {
    std::cout << "Destructing a Linux button";
    return;
}

void LinuxButton::Init() {
    std::cout << "Initialising a Linux button";
}

void LinuxButton::Render() {
    std::cout << "Rendering a Linux button";
}

void LinuxButton::SetTitle(std::string _title) {
    title = _title;
}
