#ifndef LINUX_GUI_FACTORY_H
#define LINUX_GUI_FACTORY_H

#include "IGUIFactory.h"

class LinuxGUIFactory : public IGUIFactory {
public:
    IButton* CreateButton() override;
};

#endif
