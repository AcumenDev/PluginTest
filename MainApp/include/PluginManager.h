#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H
#include <iostream>
#include <list>


#ifdef _WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif



  using std::list;
    using std::string;
class PluginManager
{


public:
    PluginManager();
    virtual ~PluginManager();

    bool AddPluginFolder(string folder);
    bool RemovePluginFolder(string folder);
    list<string> GetPluginFolderList();

    bool RefreshPluginList();
    list<string> GetPluginList();

    void * LoadPlugin(string name);
    bool UnloadPlugin(string name);

    void * LoadProcedureFromPlugin(void * plugin, string name);

protected:
private:
    list<string> _pluginFolder;
    list<string> _pluginList;
};

#endif // PLUGINMANAGER_H
