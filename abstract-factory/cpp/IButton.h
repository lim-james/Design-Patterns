#ifndef I_BUTTON_H
#define I_BUTTON_H

#include <string>

class IButton {
public:
    virtual ~IButton() = 0;
    virtual void Init() = 0;
    virtual void Render() = 0;
    virtual void SetTitle(std::string _title) = 0;
};

#endif
