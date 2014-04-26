#ifndef IPLUGIN_H
#define IPLUGIN_H
#include <iostream>

///Интервейс которые должны реализовывать в dll плагина

class IMyPlugin {
public:
    IMyPlugin() {};
    virtual ~IMyPlugin() {};
    virtual std::string GetName() {
        return "Unknown plugin";
    }
};

#endif // IPLUGIN_H
