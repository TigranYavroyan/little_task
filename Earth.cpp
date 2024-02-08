#include "Earth.hpp"

Earth::Earth () {
    for (int i = 0; i < continents_quantity; ++i) {
        continents.push_back(new Continent());
    }
}

Earth::~Earth () {
    for (int i = 0; i < continents_quantity; ++i) {
        delete continents[i];
    }
}

void Earth::first_cont_to_sleep () {
    continents[0]->country_to_sleep();
}

void Earth::first_cont_to_wake_up () {
    continents[0]->country_to_wake_up();
}

void Earth::second_cont_to_sleep () {
    continents[1]->country_to_sleep();
}

void Earth::second_cont_to_wake_up () {
    continents[1]->country_to_wake_up();
}