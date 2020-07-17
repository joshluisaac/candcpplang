
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
    LOG("Constructing... " << this)
  }

  ~Person(){LOG("Destructing... " << this)}

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


void logDetails(const Person& josh, Person* pJosh, Person& rJosh);
void logDetails2(Person josh, Person* pJosh, Person& rJosh);
int main() {
  Person  josh("Joshua", "Uzo", 789.47, 90);
  Person jClone = josh; //jClone is a copy of josh
  Person* pJosh = &josh; //pJosh is a Person pointer
  Person& rJosh = josh; //rJosh is an alias that refers to josh
  logDetails(josh, pJosh, rJosh);
  logDetails2(josh, pJosh, rJosh);

  josh.SetFirstName("Sam");
  logDetails(josh, pJosh, rJosh);

  pJosh->SetFirstName("Junia");
  logDetails(josh, pJosh, rJosh);

  rJosh.SetFirstName("Luke");
  logDetails(josh, pJosh, rJosh);

  return 0;
}

void logDetails(const Person& josh, Person* pJosh, Person& rJosh) {
  LOG(pJosh->GetFullName())
  LOG(rJosh.GetFullName())
  LOG(josh.GetInfo())
  cout << endl;
}

//Unlike Java. In C++ there's a difference between pass by reference and pass by value.
//Parameter "josh" is a copy or a value of Person josh and not a reference to Person josh.
//This means that updating or modifying parameter "josh" does not alter the Person josh.
//Consider making parameter "josh" a const reference and not a copy of Person josh
void logDetails2(Person josh, Person* pJosh, Person& rJosh) {
  printf("%p\n",&josh);

  LOG(pJosh->GetFullName())
  LOG(rJosh.GetFullName())
  LOG(josh.GetInfo())
  cout << endl;
}
