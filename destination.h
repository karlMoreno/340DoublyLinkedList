//
// Created by Elias Magdaleno on 12/2/23.
//
#include "timeCycle.h"
#include "node.h"
#include "LinkedList.h"
#ifndef INC_340DOUBLYLINKEDLIST_DESTINATION_H
#define INC_340DOUBLYLINKEDLIST_DESTINATION_H


class destination {
private:
    int currentFloor;


    LinkedList<> nextLocation;

    timeCycle time;
public:
    destination(const LinkedList& currentLocation, const LinkedList&);
    //todo use linked list nodes as individual locations ex. head node == first floor
    timeCycle getNextLocationTime();
    void setNextLocationTime();
    bool isTimeForNextLocation();



};


#endif //INC_340DOUBLYLINKEDLIST_DESTINATION_H
