#include <iostream>
#include <windows.h>
#include "IPlugin.h"
using namespace std;

typedef IPlugin * (*LPPLUGINGETNAME)(void);

int main()
{
    HMODULE sdl_library = LoadLibrary("plugin/libPlugin.dll");
    if (sdl_library == NULL)
    {
        cout << "Not loading!" << endl;
    }
    else
    {
        auto proc = (LPPLUGINGETNAME)GetProcAddress(sdl_library,"LoadPlugin");
        if (proc == NULL)
        {
            cout << "Not find GetName!" << endl;
        }
        else
        {
            IPlugin * plugin = proc();
            cout << plugin->GetName() << endl;

            // cast initializer to its proper type and use
        }
    }


   // cout << "Hello world!" << endl;
    return 0;
}
