// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

// Destination class?
class Destination;

class Person {
private:
    std::string name;
    int age;
    int weight;
    Destination destination;

public:
    Person(std::string name, int age, Destination destination, int weight);
    std::string getName() const;
    int getAge() const;
    int getWeight() const;
    Destination getDestination() const;
};

#endif