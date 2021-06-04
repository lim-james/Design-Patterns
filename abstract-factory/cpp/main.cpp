#include "IGUIFactory.h"

#if _WIN32 || _WIN64
    #define USE_WINDOWS
    #include "WinFactory.h"
#elif unix || __unix || __unix__ || __APPLE || _MACH__
    #define USE_MAC
    #include "MacFactory.h"
#elif __linux__
    #define USE_LINUX
    #include "LinuxFactory.h"
#endif

int main() {
    IGUIFactory* guiFactory;

#if defined(USE_WINDOWS)
    guiFactory = new WinFactory;
#elif defined(USE_MAC)
    guiFactory = new MacFactory;
#elif defined (USE_LINUX)
    guiFactory = new LinuxFactory;
#endif

    IButton* button = guiFactory->CreateButton();
    button->Init();
    button->SetTitle("Click me!");
    button->Render();
    delete button;

    return 0;
}
