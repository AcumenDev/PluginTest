#include "Plugin.h"

Plugin::Plugin(std::string patch): IPlugin(patch) {
}

Plugin::~Plugin() {
    //dtor
}

void * Plugin::ExecProcedure(std::string name) {
    auto proc = (LOADPPLUGIN)GetProcAddress(_lib, name.c_str());
    return proc();
}

bool Plugin::Unload() {
    ///���� ����� �� ���������� �� ��� ������ ��� ������ �� ����������
    return FreeLibrary(_lib);
}

bool Plugin::Load() {
    _lib = LoadLibrary("plugin/libPlugin.dll");
    if (_lib == NULL) {
        return false;
    }
    return true;
}
