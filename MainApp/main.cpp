#include <iostream>
#include <windows.h>
#include "IMyPlugin.h"
#include "PluginManager.h"
using namespace std;



int main() {
    ///Стандартная загрузка
    typedef void * (*LOADPPLUGIN)(void);

    HMODULE sdl_library = LoadLibrary("plugin/libPlugin.dll");
    if (sdl_library == NULL) {
        cout << "Not loading!" << endl;
    } else {
        auto proc = (LOADPPLUGIN)GetProcAddress(sdl_library,"LoadPlugin");
        if (proc == NULL) {
            cout << "Not find GetName!" << endl;
        } else {
            IMyPlugin * plugin = ( IMyPlugin *)proc();
            cout << plugin->GetName() << endl;
            //
            delete plugin;
            FreeLibrary(sdl_library);
            //   cout << plugin->GetName() << endl;
            // cast initializer to its proper type and use
        }
    }
///написал менеджера
    PluginManager pm;

    Plugin * pl = pm.GetPlugin("plugin/libPlugin.dll");

    if(pl->Load()) {
        auto  plugin1 =(IMyPlugin*) pl->ExecProcedure("LoadPlugin");
        // auto  plugin1 = pl->LoadObject<IMyPlugin>("LoadPlugin");  ///Заставить это работать
        cout << plugin1->GetName() << endl;
        delete plugin1;
        pl->Unload();
    }
    return 0;
}
