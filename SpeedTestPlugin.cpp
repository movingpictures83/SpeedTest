#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SpeedTestPlugin.h"



void SpeedTestPlugin::input(std::string file) {
 inputfile = file;
}

void SpeedTestPlugin::run() {}

void SpeedTestPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "speedtest-cli";
 system(myCommand.c_str());
}

PluginProxy<SpeedTestPlugin> SpeedTestPluginProxy = PluginProxy<SpeedTestPlugin>("SpeedTest", PluginManager::getInstance());
