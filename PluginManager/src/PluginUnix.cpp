#ifdef UNIX
#include "PluginUnix.h"

PluginUnix::PluginUnix(void * lib): _lib(lib) {
}

PluginUnix::~PluginUnix() {
    //dtor
}

void * PluginUnix::LoadProcedureFromPlugin(std::string name) {

}
#endif // UNIX
