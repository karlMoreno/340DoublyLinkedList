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
    LinkedList* currentLocation;
    Node* nextLocation;

    timeCycle time;
public:
    destination(const LinkedList& currentLocation, const LinkedList&);
    //todo use linked list nodes as indiviual locations ex. head node == first floor
    timeCycle getNextLocationTime();
    void setNextLocationTime();
    bool isTimeForNextLocation();



};


#endif //INC_340DOUBLYLINKEDLIST_DESTINATION_H
