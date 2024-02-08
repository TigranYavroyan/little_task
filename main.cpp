#include <iostream>
#include <fstream>
#include <unistd.h> // for usleep()
#include "Earth.hpp"

using std::string;

int main () {
    Earth earth;

    string first = "It is morning on the first continent\n";
    string second = "The population is waking up on the first continent\n";
    string third = "On the other continent population are sleeping\n";
    string forth = "It is already night , on the first continent people have to go sleep\n";
    string fifth = "On the 2nd continent population are waking up\n";
    string sixth = "Day is going good!\n";
    string seventh = "Nothing special, it is evening and on the second continent population is going to sleep\n";
    string eight = "It is going again!\n";

    std::ofstream file("data.txt");
    int day = 2;
    if (file.is_open()) {
        for (int i = 1; i <= day; ++i) {
            system("clear");
            std::cout << "------------------ Day " << i << "------------------\n";
            file << "------------------ Day " << i << "------------------\n";
            std::cout << first;
            file << first;
            earth.first_cont_to_wake_up();
            earth.second_cont_to_sleep();
            std::cout << second;
            file << second;
            std::cout << third;
            file << third;
            usleep(3000000);
            std::cout << forth;
            file << forth;
            earth.first_cont_to_sleep();
            earth.second_cont_to_wake_up();
            std::cout << fifth;
            file << fifth;
            usleep(3000000);
            std::cout << sixth;
            file << sixth;
            usleep(3000000);
            std::cout << seventh;
            file << seventh;
            usleep(3000000);
            std::cout << eight;
            file << eight;
            usleep(1500000);
            std::cout << std::endl;
        }
    }
    file.close();
}