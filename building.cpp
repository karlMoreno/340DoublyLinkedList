#include "Building.h"
#include <iostream>
using namespace std;

Building::Building() {
    // Building has 5 floors and 2 elevators
    for (int i = 0; i < 5; ++i) {
        floors.push_back(floor());
    }

    for (int i = 0; i < 2; ++i) {
        elevators.push_back(elevator());
    }
}

bool Building::checkIn() {
    // Building is always open?
    return true;
}

void Building::addPerson() {
    cout << "A person has been added to the building." << std::endl;
}

void Building::moveElevator() {
    cout << "An elevator is moving to the requested floor." << std::endl;
}