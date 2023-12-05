//
// Created by Elias Magdaleno on 12/3/23.
//

#include "elevator.h"
#include "person/person.h"


elevator::elevator(int numFloors) : numFloors(numFloors), currentFloor(1), passengers() {}

void elevator::addPerson(const person &person) {
    passengers.push_back(person);
}

void elevator::move(int destinationFloor) {
    if(destinationFloor < 1 || destinationFloor > numFloors){
        std::cout << "Invalid destination floor!" << std::endl;
        return;
    }
    while (passengers.size() > 0 && passengers.getHead()->getEntry().getCurrentFloor() != destinationFloor) {
        Node<person> *passengerNode = passengers.getHead();
        person &passenger = passengerNode->getEntry();

        std::cout << "Moving " << passenger.getName() << " from floor "
                  << passenger.getCurrentFloor() << " to floor " << destinationFloor << std::endl;

        passenger.setCurrentFloor(destinationFloor);

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

LinkedList<person> elevator::getPassengerList() const {
    return passengers;
}




