#pragma once
#include <string>

#include "Person.h"

class Tweeter : public Person {
   private:
    std::string tweeterHandle;

   public:
    Tweeter(std::string firstName, std::string lastName, int personId,
            std::string handle);
    ~Tweeter();
};
