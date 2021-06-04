#ifndef LINUX_BUTTON_H
#define LINUX_BUTTON_H

#include "IButton.h"

class LinuxButton : public IButton {
    std::string title;
public:
    LinuxButton() = default;
    ~LinuxButton();
    void Init() override;
    void Render() override;
    void SetTitle(std::string _title) override;
};

#endif
