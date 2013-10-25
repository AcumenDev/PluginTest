#ifndef PLUGIN_H
#define PLUGIN_H
#include <windows.h>
#include "IPlugin.h"


class Plugin : public IPlugin {
public:
    Plugin(std::string patch);
    virtual ~Plugin();
    bool Load();
    bool Unload();
    void * ExecProcedure(std::string name);
protected:
private:
    HMODULE _lib;
};

#endif // PLUGINWINDOWS_H
