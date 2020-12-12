#pragma once
#include <string>

class Person {
   private:
    std::string firstName;
    std::string lastName;
    int personId;

   public:
    Person(std::string firstName, std::string lastName, int personId);
    Person();
    ~Person();
    std::string getName();
    int getId();
};
