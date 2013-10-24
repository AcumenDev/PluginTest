#include "PluginManager.h"

PluginManager::PluginManager()
{
    //ctor
}

PluginManager::~PluginManager()
{
    //dtor
}

void PluginManager::AddPluginFolder(string folder)
{
    _pluginFolder.push_back(folder);
}

bool PluginManager::RemovePluginFolder(string folder)
{
    _pluginFolder.remove(folder);
}

const list<string> PluginManager::GetPluginFolderList()
{
    return _pluginFolder;
}

bool PluginManager::RefreshPluginList()
{

}

const list<string> PluginManager::GetPluginList()
{

}

PLPLUGIN PluginManager::LoadPlugin(string name)
{

}

bool PluginManager::UnloadPlugin(string name)
{

}

PLPROC PluginManager::LoadProcedureFromPlugin(PLPLUGIN plugin, string name)
{
    return GetProcAddress(plugin, name.c_str());
//    if (proc == NULL)
//    {
//        cout << "Not found " + name << endl;
//    }
//    else
//    {
//        return proc;
//    }
}
