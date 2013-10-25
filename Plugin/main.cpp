#include "IMyPlugin.h"

class MyPlugin : public IMyPlugin {
public:
    MyPlugin() {};
    virtual ~MyPlugin() {};
    std::string GetName() override {
        return "MyPlugin";
    }
};

extern "C"
{
    __declspec(dllexport) IMyPlugin * LoadPlugin();
};

IMyPlugin * LoadPlugin() {
    return new MyPlugin();
}
