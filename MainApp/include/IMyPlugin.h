#ifndef IPLUGIN_H
#define IPLUGIN_H
#include <iostream>

///��������� ������� ������ ������������� � dll �������

class IMyPlugin {
public:
    IMyPlugin() {};
    virtual ~IMyPlugin() {};
    virtual std::string GetName() = 0;
};

#endif // IPLUGIN_H
