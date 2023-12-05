//
// Created by Elias Magdaleno on 12/4/23.
// Edited by Pablo Partida 12/4/2023

#include "person.h"
#include <string>
using namespace std;

Person::Person( string name, int age, Destination destination):
    name(name), age(age), destination(destination), weight(weight){}

string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

int Person::getWeight() const{
    return weight;
}

Destination Person::getDestination() const{
    return destination;
}

