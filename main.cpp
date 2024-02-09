#include "DayCycle.hpp"

int main () {
    Earth earth;
    DayCycle daycycle;
    std::ofstream file("data.txt");
    if (file.is_open())
        daycycle(file, earth, 10);
    file.close();
}
