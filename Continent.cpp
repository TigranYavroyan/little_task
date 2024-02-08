#include "Continent.hpp"

Continent::Continent () {
    for (int i = 0; i < countries_quantity; ++i) {
        countries.push_back(new Country);
    }
}

Continent::~Continent () {
    for (int i = 0; i < countries_quantity; ++i) {
        delete countries[i];
    }
}

void Continent::country_to_sleep () {
    for (int i = 0; i < countries_quantity; ++i) {
        countries[i]->population_to_sleep();
    }
}

void Continent::country_to_wake_up () {
    for (int i = 0; i < countries_quantity; ++i) {
        countries[i]->population_to_wake_up();
    }
}