#include "Person.h"
// Include other necessary headers, such as "Destination.h" if it exists

Person::Person(std::string name, int age, Destination destination, int weight)
        : name(name), age(age), destination(destination), weight(weight) {}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

int Person::getWeight() const {
    return weight;
}

Destination Person::getDestination() const {
    return destination;
}