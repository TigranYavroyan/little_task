#include "Country.hpp"

Country::Country () {
    for (int i = 0; i < population_quantity; ++i) {
        population.push_back(new Person());
    }
}

Country::~Country () {
    for (int i = 0; i < population_quantity; ++i) {
        delete population[i];
    }
}

void Country::population_to_sleep () {
    for (int i = 0; i < population_quantity; ++i) {
        population[i]->to_sleep();
    }
}

void Country::population_to_wake_up () {
    for (int i = 0; i < population_quantity; ++i) {
        population[i]->to_wake_up();
    }
}