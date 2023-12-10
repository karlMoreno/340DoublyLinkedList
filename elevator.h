//
// Created by Elias Magdaleno on 12/3/23.
//

#ifndef INC_340DOUBLYLINKEDLIST_ELEVATOR_H
#define INC_340DOUBLYLINKEDLIST_ELEVATOR_H
#pragma once
//#include "LinkedList.h"
#include "person/person.h"


class elevator {

    double weightCapacity;
    double currentWeight;
    int maxOccupancy;
    int currentPassengers{0};
    int currentFloor{0};
    int numFloors;
    LinkedList<Person> passengers;
public:
    elevator(int numFloors, int maxOccupancy);
    void addPerson(const Person& person);
    void move(int destinationFloor);
    int getCurrentFloor() const;
    bool isFull() const;
    bool isEmpty() const;
    void clearElevator();
    int getNumPassengers() const;
    LinkedList<Person> getPassengerList() const;



};


#endif //INC_340DOUBLYLINKEDLIST_ELEVATOR_H
