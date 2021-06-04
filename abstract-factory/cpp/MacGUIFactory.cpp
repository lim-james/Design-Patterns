#include "MacGUIFactory.h"

#include "MacButton.h"

IButton* MacGUIFactory::CreateButton() {
    return new MacButton; 
}
