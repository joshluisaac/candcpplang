
#include <iostream>
#include <utility>

#include "logger.h"
using std::cout;
using std::endl;

class Person {
 private:
  std::string firstName;
  std::string lastName;
  double income;
  int age;

 public:
  Person(std::string firstName, std::string lastName, double income, int age) {
    this->firstName = std::move(firstName);
    this->lastName = std::move(lastName);
    this->income = income;
    this->age = age;
  }

  ~Person(){LOG("Destructing " << this)}

  std::string GetFullName() {
    return firstName + " " + lastName;
  }

  std::string GetInfo() const {
    std::string fullInfo;
    return fullInfo.append(firstName)
        .append("|")
        .append(lastName)
        .append("|")
        .append(std::to_string(income))
        .append("|")
        .append(std::to_string(age));
  }

  void SetFirstName(std::string firstName) { this->firstName = firstName; }
};

int main() {
  Person josh("Joshua", "Uzo", 789.47, 90);

  Person* pJosh = &josh;
  Person& rJosh = josh;

  LOG(pJosh->GetFullName())
  LOG(rJosh.GetFullName())
  LOG(josh.GetInfo())
  cout << endl;

  josh.SetFirstName("Janiyah");
  LOG(pJosh->GetFullName())
  LOG(rJosh.GetFullName())
  LOG(josh.GetInfo())
  cout << endl;

  pJosh->SetFirstName("Junia");
  LOG(pJosh->GetFullName())
  LOG(rJosh.GetFullName())
  LOG(josh.GetInfo())
  cout << endl;

  rJosh.SetFirstName("Luke");
  LOG(pJosh->GetFullName())
  LOG(rJosh.GetFullName())
  LOG(josh.GetInfo())

  return 0;
}
