#ifndef WIN_BUTTON_H
#define WIN_BUTTON_H

#include "IButton.h"

class WinButton : public IButton {
    std::string title;
public:
    WinButton() = default;
    ~WinButton();
    void Init() override;
    void Render() override;
    void SetTitle(std::string _title) override;
};

#endif
