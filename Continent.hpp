#ifndef CONTINENT_H
#define CONTINENT_H

#include "Country.hpp"

class Continent {
public:
    Continent ();
    ~Continent ();
public:
    void country_to_sleep ();
    void country_to_wake_up ();
private:
    vector <Country*> countries;
    const short countries_quantity{2};
};

#endif // CONTINENT_H