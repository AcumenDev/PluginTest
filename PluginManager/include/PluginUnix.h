#ifdef UNIX
#ifndef PLUGINUNIX_H
#define PLUGINUNIX_H
#include <IPlugin.h>


class PluginUnix : public IPlugin {
public:
    PluginUnix(void * lib);
    virtual ~PluginUnix();
    virtual void * LoadProcedureFromPlugin(std::string name);
protected:
private:
    void * _lib;
};

#endif // PLUGINUNIX_H
#endif // UNIX
