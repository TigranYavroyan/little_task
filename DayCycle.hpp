#ifndef DAYCYCLE_H
#define DAYCYCLE_H

#include <unistd.h> // for usleep()
#include <fstream>
#include <iostream>
#include "Earth.hpp"
#include <string>

using std::string;

class DayCycle {
public:
    void operator ()(std::ofstream& file, Earth& earth, int day = 2);
private:
    string first = "It is morning on the first continent\n";
    string second = "The population is waking up on the first continent\n";
    string third = "On the other continent population are sleeping\n";
    string forth = "It is already night , on the first continent people have to go sleep\n";
    string fifth = "On the 2nd continent population are waking up\n";
    string sixth = "Day is going good!\n";
    string seventh = "Nothing special, it is evening and on the second continent population is going to sleep\n";
    string eight = "It is going again!\n";
};

#endif // DAYCYCLE_H