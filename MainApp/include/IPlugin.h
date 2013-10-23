#ifndef IPLUGIN_H
#define IPLUGIN_H
#include <iostream>

class IPlugin
{
public:
    IPlugin() {};
    virtual ~IPlugin() {};
    virtual std::string GetName() = 0;
};

#endif // IPLUGIN_H
