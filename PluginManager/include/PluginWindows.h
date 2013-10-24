#ifndef PLUGINWINDOWS_H
#define PLUGINWINDOWS_H
#include <windows.h>
#include <IPlugin.h>

class PluginWindows : public IPlugin {
public:
    PluginWindows(void * lib);
    virtual ~PluginWindows();
    void * LoadProcedureFromPlugin(std::string name);
protected:
private:
    HMODULE _lib;
};

#endif // PLUGINWINDOWS_H
