#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> names{"Larry", "Justin", "Lucas", "Peter"};

  // display by reference
  for (const auto &name : names)
    cout << name << " ";
  cout << endl;

  vector<string> *namesPtr{&names};

  // display by vector pointer
  for (const auto &name : *namesPtr)
    cout << name << " ";
  cout << endl;

  return 0;
}
