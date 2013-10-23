#include "IPlugin.h"

class MyPlugin : public IPlugin
{
public:
    MyPlugin() {};
    virtual ~MyPlugin() {};
    std::string GetName() override
    {
        return "MyPlugin";
    }
};

extern "C"
{
    __declspec(dllexport) IPlugin * LoadPlugin();
};

IPlugin * LoadPlugin()
{
    return new MyPlugin();
}
