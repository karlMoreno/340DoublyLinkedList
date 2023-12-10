// Person.h
#ifndef PERSON_H
#define PERSON_H


#include <string>
#include "../destination.h"
// Destination class?


class Person {
private:
    std::string name;
    int age;
    int weight;
    class destination destination;

public:
    Person(std::string name, int age, class destination destination, int weight);
    std::string getName() const;
    int getAge() const;
    int getWeight() const;
    class destination getDestination() const;
};

#endif