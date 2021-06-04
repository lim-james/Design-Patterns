#ifndef WIN_GUI_FACTORY_H
#define WIN_GUI_FACTORY_H

#include "IGUIFactory.h"

class WinGUIFactory : public IGUIFactory {
public:
    IButton* CreateButton() override;
};

#endif
