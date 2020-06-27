#include <iostream>
#include <vector>

using namespace std;

int main() {

  int score{100};

  // declare a score pointer and set it's value to &score (address of score);
  int *score_ptr{&score};

  // means follow the score pointer and reveal the value of what it points to.
  // This is known as de-referencing;
  cout << *score_ptr << endl;
  cout << score << endl;

  // means follow the score pointer and reveal the value of what it points to
  // and update that revealed value to 200
  // This is known as de-referencing and updating;
  *score_ptr = 200;
  cout << *score_ptr << endl;
  cout << score << endl;

  double high_temp{167.4};
  double low_temp{28.6};
  double *temp_ptr{&high_temp};
  cout << *temp_ptr << endl; // 167.4
  temp_ptr = &low_temp;
  cout << *temp_ptr << endl; // 28.6

  string name = "Joshua";
  string *name_ptr = &name;
  cout << *name_ptr << endl;
  name = "Sammy";
  cout << *name_ptr << endl;

  // declare and assign a vector containing 3 elements
  vector<string> employees{"Josh", "Sarah", "Sammy"};
  // declare and assign a vector pointer to employees vector
  vector<string> *employees_ptr{&employees};

  cout << &employees << endl;
  cout << "First name: " << (*employees_ptr).at(0) << endl;
  cout << "Third name: " << (*employees_ptr).at(2) << endl;

  for (const string &employee : employees) {
    cout << employee << endl;
  }

  for (const auto &employee : (*employees_ptr)) {
    cout << employee << endl;
  }

  return 0;
}
