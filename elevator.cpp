//
// Created by Elias Magdaleno on 12/3/23.
//

#include "elevator.h"
#include <iostream>

elevator::elevator(int numFloors, int maxOccupancy) : numFloors(numFloors), maxOccupancy(maxOccupancy), currentFloor(1), passengers() {}

void elevator::addPerson(const Person &person) {
    passengers.push_back(person);
}

void elevator::move(int destinationFloor) {
    if(destinationFloor < 1 || destinationFloor > numFloors){
        std::cout << "Invalid destination floor!" << std::endl;
        return;
    }
    while (passengers.size() > 0 && passengers.getHead()->getEntry().getDestination().getCurrentFloor() != destinationFloor) {
        Node<Person> *passengerNode = passengers.getHead();
        const Person &passenger = passengerNode->getEntry();

        std::cout << "Moving " << passenger.getName() << " from floor "
                  << passenger.getDestination().getCurrentFloor() << " to floor " << destinationFloor << std::endl;

        passenger.getDestination().setCurrentFloor(destinationFloor);

        passengers.deleteEntry(passengerNode);
    }
    currentFloor = destinationFloor;
    std::cout << "Elevator has arrived at floor" << currentFloor << std::endl;
}

int elevator::getCurrentFloor() const {
    return currentFloor;
}

bool elevator::isFull() const {
    return false;
}
void elevator::clearElevator() {
    passengers.clear();
}

bool elevator::isEmpty() const {
    return passengers.size() == 0;
}

int elevator::getNumPassengers() const {
    return passengers.size();
}

LinkedList<Person> elevator::getPassengerList() const {
    return passengers;
}




