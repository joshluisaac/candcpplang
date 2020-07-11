#include <iostream>

using namespace std;

int* create_array(size_t size, int initial_value);
void display();

int* create_array(size_t size, int initial_value) {
  int* storage{nullptr};
  storage = new int[size];
  for (size_t i = 0; i < size; i++) {
    // subscript notation
    // storage[i] = initial_value;

    // offset notation
    *(storage + i) = initial_value;
  }
  return storage;
}

void display(int* storage, size_t size) {
  for (size_t i = 0; i < size; i++) cout << storage[i] << "";
  cout << endl;
}

int main() {
  int size;
  int initial_value;
  cout << "How many items in the array do you want to allocate? ";
  cin >> size;

  cout << "What would you like to initialize the values to? ";
  cin >> initial_value;
  int* new_array = create_array(size, initial_value);
  display(new_array, size);

  delete[] new_array;  // deallocate on heap.
  return 0;
}