//
// Created by Elias Magdaleno on 12/3/23.
//

#ifndef INC_340DOUBLYLINKEDLIST_ELEVATOR_H
#define INC_340DOUBLYLINKEDLIST_ELEVATOR_H

#include "LinkedList.h"
#include "person/person.h"
#include "node.h"

class elevator {

    double weightCapacity;
    double currentWeight;
    int maxOccupancy;
    int currentPassengers{0};
    int currentFloor{0};
    int numFloors;
    LinkedList<person> passengers;
public:
    elevator(int numFloors);
    void addPerson(const person& person);
    void move(int destinationFloor);
    int getCurrentFloor() const;
    bool isFull() const;
    bool isEmpty() const;
    void clearElevator();
    int getNumPassengers() const;
    LinkedList<person> getPassengerList() const;


};


#endif //INC_340DOUBLYLINKEDLIST_ELEVATOR_H
