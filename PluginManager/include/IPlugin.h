#ifndef IPLUGIN_H
#define IPLUGIN_H
#include <iostream>
//
//#ifdef _WIN32

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



class IPlugin {
public:
    IPlugin() {};
    IPlugin(void * lib) {};
    virtual ~IPlugin() {};
    virtual void * LoadProcedureFromPlugin(std::string name) = 0 ;
protected:
    typedef void * (*LOADPPLUGIN)(void);
};

#endif // IPLUGIN_H
