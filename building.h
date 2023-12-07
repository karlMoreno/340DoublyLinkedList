#ifndef INC_340DOUBLYLINKEDLIST_BUILDING_H
#define INC_340DOUBLYLINKEDLIST_BUILDING_H

#include <vector>
#include "floor.h"
#include "elevator.h"

class Building {
private:
    std::vector<floor> floors;
    std::vector<elevator> elevators;

public:
    Building();
    bool checkIn();
    void addPerson();
    void moveElevator();
};

#endif // BUILDING_H