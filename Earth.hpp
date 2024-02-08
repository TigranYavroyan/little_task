#ifndef EARTH_H
#define EARTH_H

#include "Continent.hpp"

class Earth {
public:
    Earth ();
    ~Earth ();
public:
    void first_cont_to_sleep ();
    void first_cont_to_wake_up ();
    void second_cont_to_sleep ();
    void second_cont_to_wake_up ();
private:
    vector <Continent*> continents;
    const short continents_quantity{2};
};

#endif // EARTH_H