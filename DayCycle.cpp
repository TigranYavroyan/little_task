#include "DayCycle.hpp"

void DayCycle::operator ()(std::ofstream& file, Earth& earth, int day) {
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