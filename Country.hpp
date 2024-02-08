#ifndef COUNTRY_H
#define COUNTRY_H

#include "Person.hpp"
#include <vector>

using std::vector;

class Country {
public:
    Country ();
    ~Country ();
public:
    void population_to_sleep ();
    void population_to_wake_up ();
private:
    vector <Person*> population;
    const short population_quantity{10};
};

#endif // COUNTRY_H