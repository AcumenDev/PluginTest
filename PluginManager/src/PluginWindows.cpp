#include "PluginWindows.h"

PluginWindows::PluginWindows(void * lib) {
    _lib = (HMODULE)lib;
}

PluginWindows::~PluginWindows() {
    //dtor
}

void * PluginWindows::LoadProcedureFromPlugin(std::string name) {
    auto proc = (LOADPPLUGIN)GetProcAddress(_lib, name.c_str());
    return proc();
}

