#ifndef DAYCYCLE_H
#define DAYCYCLE_H

#include <unistd.h> // for usleep()
#include <fstream>
#include <iostream>
#include "Earth.hpp"

class DayCycle {
public:
    void operator ()(std::ofstream& file, Earth& earth, int day = 2);
private:
    const char* first = "It is morning on the first continent\n";
    const char* second = "The population is waking up on the first continent\n";
    const char* third = "On the other continent population are sleeping\n";
    const char* forth = "It is already night , on the first continent people have to go sleep\n";
    const char* fifth = "On the 2nd continent population are waking up\n";
    const char* sixth = "Day is going good!\n";
    const char* seventh = "Nothing special, it is evening and on the second continent population is going to sleep\n";
    const char* eight = "It is going again!\n";
};

#endif // DAYCYCLE_H