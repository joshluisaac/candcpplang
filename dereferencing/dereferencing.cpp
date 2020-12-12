#include "dereferencing.h"

#include <vector>

#include "logger.h"

void execute() {
    int score{100};

    // declare a score pointer and set it's value to &score (address of score);
    int* score_ptr{&score};

    // means follow the score pointer and reveal the value of what it points to.
    // This is known as de-referencing;
    LOG("Dereference: " << *score_ptr);

    // means follow the score pointer and reveal the value of what it points to
    // and update that revealed value to 200
    // This is known as de-referencing and updating;
    *score_ptr = 200;
    LOG("Dereference and update: " << *score_ptr);

    double high_temp{167.4};
    double low_temp{28.6};
    double* temp_ptr{&high_temp};
    LOG(*temp_ptr)  // 167.4
    temp_ptr = &low_temp;
    LOG(*temp_ptr)  // 28.6

    std::string name = "Joshua";
    std::string* name_ptr = &name;
    LOG(*name_ptr)
    name = "Sammy";
    LOG(*name_ptr)

    // declare and assign a vector containing 3 elements
    std::vector<std::string> employees{"Josh", "Sarah", "Sammy"};

    // declare and assign a vector pointer to employees vector
    std::vector<std::string>* employees_ptr{&employees};

    // employees reference
    std::vector<std::string>& employeesRef{employees};

    LOG("Address of employees: " << &employees)
    LOG((*employees_ptr).at(0))
    LOG((*employees_ptr).at(2))

    // display from employees
    LOG("Display from employees")
    for (std::string const& employee : employees) {
        LOG(employee)
    }

    // display from employees ptr
    LOG("Display from employees pointer")
    for (auto const& employee : *employees_ptr) {
        LOG(employee)
    }

    // display from employees reference
    LOG("Display from employees reference")
    for (auto const& employee : employeesRef) {
        LOG(employee)
    }
}
