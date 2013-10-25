#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H
#include <iostream>
#include <list>
#include <map>
#include "Plugin.h"

using std::list;
using std::string;
using std::map;


///���� ��� �� ������� ����� ������ �������� � ��������� � ����� ����� ������� ��� ����� �������� �� ��� ��������
class PluginManager {
public:
    PluginManager();
    virtual ~PluginManager();
    void AddPluginFolder(string folder);
    void RemovePluginFolder(string folder);
    const list<string> GetPluginFolderList();
    void RefreshPluginList();
    const list<string> GetPluginList();
    IPlugin * GetPlugin(string name);

protected:
private:
    list<string> _pluginFolder;
    map<string, string> _pluginList;
};

#endif // PLUGINMANAGER_H
