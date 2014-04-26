#ifndef PLUGIN_H
#define PLUGIN_H
#include <windows.h>
#include "IPlugin.h"


class Plugin {
public:
    Plugin(std::string patch);
    virtual ~Plugin();
    bool Load();
    bool Unload();
    void * ExecProcedure(std::string name);
    template<class T> T * LoadObject(std::string name);
protected:
private:
    HMODULE _lib;
      typedef void * (*LOADPPLUGIN)(void);
    std::string _patch;
};

#endif // PLUGINWINDOWS_H
