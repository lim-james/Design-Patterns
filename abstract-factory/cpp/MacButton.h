#ifndef MAC_BUTTON_H
#define MAC_BUTTON_H

#include "IButton.h"

class MacButton : public IButton {
    std::string title;
public:
    MacButton() = default;
    ~MacButton();
    void Init() override;
    void Render() override;
    void SetTitle(std::string _title) override;
};

#endif
