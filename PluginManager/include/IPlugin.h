#ifndef IPLUGIN_H_INCLUDED
#define IPLUGIN_H_INCLUDED
#include <iostream>
class IPlugin {
public:
    IPlugin() {};
    IPlugin(std::string patch):_patch(patch) {};
    virtual ~IPlugin() {};
    virtual bool Load() = 0;
    virtual bool Unload() = 0;
    virtual void * ExecProcedure(std::string name) = 0 ;
    virtual void * LoadObject() = 0 ;
protected:
    typedef void * (*LOADPPLUGIN)(void);
    std::string _patch;
};

#endif // IPLUGIN_H_INCLUDED
