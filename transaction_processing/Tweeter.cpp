#include "Tweeter.h"

#include <iostream>
#include <utility>

Tweeter::Tweeter(std::string firstName, std::string lastName, int personId,
                 std::string handle)
    : Person(std::move(firstName), std::move(lastName), personId),
      tweeterHandle(std::move(handle)) {
    std::cout << "Constructing tweeter " << tweeterHandle << std::endl;
}

Tweeter::~Tweeter() {
    std::cout << "destructing tweeter " << tweeterHandle << std::endl;
}
