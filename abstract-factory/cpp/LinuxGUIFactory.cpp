#include "LinuxGUIFactory.h"

#include "LinuxButton.h"

IButton* LinuxGUIFactory::CreateButton() {
    return new LinuxButton; 
}
