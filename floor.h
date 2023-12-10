//
// Created by Elias Magdaleno on 12/3/23.
//

#ifndef INC_340DOUBLYLINKEDLIST_FLOOR_H
#define INC_340DOUBLYLINKEDLIST_FLOOR_H
#include "LinkedList.h"
#include "person/person.h"

class floor {
private:
    int numFloors;
    int maxOccupancy;
    LinkedList<Person> peopleOnFloor;

public:
    void addPerson();
    void removePerson();


};


#endif //INC_340DOUBLYLINKEDLIST_FLOOR_H
