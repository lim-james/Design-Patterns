#include "WinGUIFactory.h"

#include "WinButton.h"

IButton* WinGUIFactory::CreateButton() {
    return new WinButton; 
}
