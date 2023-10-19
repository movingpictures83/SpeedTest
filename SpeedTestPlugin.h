#ifndef SPEEDTESTPLUGIN_H
#define SPEEDTESTPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SpeedTestPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SpeedTest";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
