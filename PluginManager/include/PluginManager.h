#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H
#include <iostream>
#include <list>
#include <map>
//
//#ifdef _WIN32
#include <windows.h>
//#else
//#include <dlfcn.h>
//#endif


//#ifdef _WIN32
typedef HMODULE PLPLUGIN;
typedef FARPROC PLPROC;
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

    PLPLUGIN LoadPlugin(string name);
    bool UnloadPlugin(PLPLUGIN plugin);

    PLPROC LoadProcedureFromPlugin(PLPLUGIN plugin, string name);

protected:
private:
    list<string> _pluginFolder;
    map<string, string> _pluginList;
};

#endif // PLUGINMANAGER_H
