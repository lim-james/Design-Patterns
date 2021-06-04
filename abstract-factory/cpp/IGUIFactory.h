#ifndef I_GUI_FACTORY_H
#define I_GUI_FACTORY_H

#include "IButton.h"

class IGUIFactory {
public:
    virtual IButton* CreateButton() = 0;
};

#endif
