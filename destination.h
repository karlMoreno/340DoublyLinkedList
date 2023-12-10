//
// Created by Elias Magdaleno on 12/2/23.
//
#include "timeCycle.h"
#include "LinkedList.h"
#ifndef INC_340DOUBLYLINKEDLIST_DESTINATION_H
#define INC_340DOUBLYLINKEDLIST_DESTINATION_H


class destination {
private:


    int currentFloor;
    //Node<int>* currentLocation;
    LinkedList<Node<int>*> nextLocations;

    timeCycle time;
public:
    //destination(Node<int>* initialLocation);
    explicit destination(int initialFloor);
    //todo use linked list nodes as individual locations ex. head node == first floor
    //Node<int>* getCurrentLocation() const;
    void setNextLocation(Node<int>* newLocation);
    int getCurrentFloor() const;
    void setCurrentFloor(int newFloor);
    LinkedList<Node<int>*> getNextLocations() const;
    timeCycle getNextLocationTime() const;
    void setNextLocationTime(const timeCycle& newTime);
    bool isTimeForNextLocation() const;



};


#endif //INC_340DOUBLYLINKEDLIST_DESTINATION_H
