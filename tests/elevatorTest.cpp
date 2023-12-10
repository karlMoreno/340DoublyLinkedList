//
// Created by Elias Magdaleno on 12/9/23.
//

#include <iostream>
#include "../elevator.h"
#include "../LinkedList.h"
#include "../timeCycle.h"
#include "../destination.h"
#include "../person/person.h"  // Make sure to include the correct path to the Person class


void testElevator() {
    // Create an elevator with 5 floors and a maximum capacity of 10 passengers
    elevator myElevator(5, 10);

    // Create a LinkedList of nodes representing floors
    LinkedList<Node<int> *> floorsList;
    for (int i = 1; i <= 5; ++i) {
        Node<int> *floorNode = new Node<int>(i);
        floorsList.push_back(floorNode);
    }

    // Create a Destination object for the first floor
    destination destinationFirstFloor(1);

    // Set the next location for the first floor to the second floor
    if (floorsList.getHead() != nullptr && floorsList.getHead()->getNext() != nullptr) {
        destinationFirstFloor.setNextLocation(floorsList.getHead()->getNext()->getEntry());
    } else {
        std::cout << "Error: Unable to set next location for the first floor." << std::endl;
        return;
    }

    // Create a Person object with a destination set to the first floor
    Person person1("Alice", 25, destinationFirstFloor, 70);

    // Add the person to the elevator
    myElevator.addPerson(person1);

    // Move the elevator to the second floor
    myElevator.move(2);

    // Print information about the elevator and passengers
    std::cout << "Current floor: " << myElevator.getCurrentFloor() << std::endl;
    std::cout << "Number of passengers: " << myElevator.getNumPassengers() << std::endl;

    // Clear the elevator
    myElevator.clearElevator();

    // Clean up memory for floor nodes
    Node<int> *currentFloorNode = reinterpret_cast<Node<int> *>(floorsList.getHead());
    while (currentFloorNode != nullptr) {
        Node<int> *nextFloorNode = currentFloorNode->getNext();
        delete currentFloorNode;
        currentFloorNode = nextFloorNode;
    }


}

