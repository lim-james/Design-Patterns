#ifndef MAC_GUI_FACTORY_H
#define MAC_GUI_FACTORY_H

#include "IGUIFactory.h"

class MacGUIFactory : public IGUIFactory {
public:
    IButton* CreateButton() override;
};

#endif
