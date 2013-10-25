#ifndef IPLUGIN_H
#define IPLUGIN_H
#include <iostream>

///Интервейс которые должны реализовывать в dll плагина

class IMyPlugin {
public:
    IMyPlugin() {};
    virtual ~IMyPlugin() {};
    virtual std::string GetName() = 0;
};

#endif // IPLUGIN_H
