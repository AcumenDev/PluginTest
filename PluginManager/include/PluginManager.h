#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H
#include <iostream>
#include <list>
#include <map>

#ifdef WINDOWS
#include "PluginWindows.h"
#else
#ifdef UNIX
#include "PluginUnix.h"
#endif
#endif
//
//#ifdef _WIN32
//#include <windows.h>
//#else
//#include <dlfcn.h>
//#endif


//#ifdef _WIN32
//typedef HMODULE PLPLUGIN;
//typedef FARPROC PLPROC;
//#else
//typedef void * PLPLUGIN;
//typedef void * PLPROC;
//#endif


using std::list;
using std::string;
using std::map;

class PluginManager {
public:
    PluginManager();
    virtual ~PluginManager();

    void AddPluginFolder(string folder);
    bool RemovePluginFolder(string folder);
    const list<string> GetPluginFolderList();

    bool RefreshPluginList();
    const list<string> GetPluginList();

    IPlugin * LoadPlugin(string name);
    bool UnloadPlugin(IPlugin * plugin);

  //  PLPROC LoadProcedureFromPlugin(PLPLUGIN plugin, string name);

protected:
private:
    list<string> _pluginFolder;
    map<string, string> _pluginList;
};

#endif // PLUGINMANAGER_H
