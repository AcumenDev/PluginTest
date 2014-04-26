#include "PluginManager.h"
PluginManager::PluginManager() {
    //ctor
}

PluginManager::~PluginManager() {
    //dtor
}

void PluginManager::AddPluginFolder(string folder) {
    _pluginFolder.push_back(folder);
}

void PluginManager::RemovePluginFolder(string folder) {
    _pluginFolder.remove(folder);
}

const list<string> PluginManager::GetPluginFolderList() {
    return _pluginFolder;
}

void PluginManager::RefreshPluginList() {

}

Plugin * PluginManager::GetPlugin(string name) {
    return new Plugin(name);
}
