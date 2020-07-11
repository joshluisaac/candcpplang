#include "Person.h"

#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string firstName, std::string lastName, int personId)
    : firstName(firstName), lastName(lastName), personId(personId) {
  cout << "Constructing " << (this) << " " << getName() << endl;
}

Person::Person() : personId(0) {
  cout << "Constructing " << (this) << " " << getName() << endl;
}

Person::~Person() { cout << "Destructing Person " << (this) << endl; }

std::string Person::getName() { return firstName + " " + lastName; }

int Person::getId() { return personId; }
