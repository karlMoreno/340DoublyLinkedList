//
// Created by Elias Magdaleno on 12/2/23.
//

#include "destination.h"


//destination::destination(Node<int> *initialLocation) : currentLocation(initialLocation){}
destination::destination(int initialFloor) {

}
/*
Node<int> *destination::getCurrentLocation() const {
    return currentLocation;
}
 */


void destination::setNextLocation(Node<int> *newLocation) {
    nextLocations.push_back(newLocation);
}

LinkedList<Node<int> *> destination::getNextLocations() const {
    return nextLocations;
}

timeCycle destination::getNextLocationTime() const{
    return time;
}

void destination::setNextLocationTime(const timeCycle& newTime) {
    time = newTime;
}

bool destination::isTimeForNextLocation() const{
    return time.checkTime();
}

int destination::getCurrentFloor() const {
    return currentFloor;
}

void destination::setCurrentFloor(int newFloor) {
    currentFloor = newFloor;
}




