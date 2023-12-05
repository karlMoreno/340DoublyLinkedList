//
// Created by Elias Magdaleno on 12/4/23.
// Edited by Pablo Partida on 12/4/23

#ifndef INC_340DOUBLYLINKEDLIST_PERSON_H
#define INC_340DOUBLYLINKEDLIST_PERSON_H


class person {
private:
    string name;
    int age;
    int weight;
    Destination destination;


public:
Person(string name, int age, Destination destination, int weight);
string getName() const;
int getAge(const);
Destination getDestination() const;
int getWeight() const;
};

#endif //INC_340DOUBLYLINKEDLIST_PERSON_H
