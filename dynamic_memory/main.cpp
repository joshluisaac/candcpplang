#include <iostream>
#include <vector>

using namespace std;

void memory_allocation();
void arrays_and_pointers();
void pointer_arithmetic();
static void swap(int* a, int* b);
void passing_pointers_2();
void passing_pointers_3();
void passing_references();
void display(const vector<string>* persons);
void displayScores(int sentinel, int* scores_ptr);
void displayScores2(int sentinel, int* scores_ptr);
void display(const vector<string>& persons);
void display(const vector<int>& scores);

int main() {
  memory_allocation();
  arrays_and_pointers();
  pointer_arithmetic();
  passing_pointers_2();
  passing_pointers_3();
  passing_references();
  return 0;
}

void memory_allocation() {
  // declare an integer pointer and point it at null
  int* int_ptr{nullptr};

  // Allocate/create a new integer on the heap and point int_ptr to it.
  int_ptr = new int;
  cout << int_ptr << endl;
  cout << *int_ptr << endl;

  *int_ptr = 200;
  cout << int_ptr << endl;
  cout << *int_ptr << endl;

  // Deallocate unnamed integer on the heap
  delete int_ptr;

  int* set = new int[100];
  delete[] set;
}

void arrays_and_pointers() {
  double balance[5] = {1000.0, 2.0, 3.4, 17.0, -50.4};

  // the name of an array is the value of the address of the 1st element.
  // That means balance == &balance[0].
  // the address of an array is the value of the address of the 1st element
  // That is, &balance == &balance[0]
  // Therefore balance == &balance == &balance[0]

  cout << balance << endl;
  cout << (balance == &balance[0]) << endl;

  // balance pointer
  double* balance_ptr{balance};  // same as double *balance_ptr{balance};

  // subscript notation
  cout << balance_ptr[0] << endl;
  cout << balance_ptr[1] << endl;
  cout << balance_ptr[2] << endl;
  cout << balance_ptr[3] << endl;
  cout << balance_ptr[4] << endl;

  // offset notation
  // increment the pointer by the given number of byte units and dereference.
  cout << *balance_ptr << endl;
  cout << *(balance_ptr + 1) << endl;
  cout << *(balance_ptr + 2) << endl;
  cout << *(balance_ptr + 3) << endl;
  cout << *(balance_ptr + 4) << endl;

  while (*balance_ptr != -50.4) {
    cout << *balance_ptr << endl;
    balance_ptr++;
  }
}

void pointer_arithmetic() {
  int scores[]{10, 20, 90, 100, 7, 5, -1};
  cout << (scores == &scores[0]) << endl;
  int sentinel = -1;
  int* scores_ptr{scores};
  displayScores(sentinel, scores_ptr);
  displayScores2(sentinel, scores_ptr);
}

void displayScores(int sentinel, int* scores_ptr) {
  while (*scores_ptr != sentinel) {
    cout << *scores_ptr << " ";
    scores_ptr++;
  }
  cout << endl;
}

void displayScores2(int sentinel, int* scores_ptr) {
  while (*scores_ptr != sentinel) {
    cout << *scores_ptr++ << " ";
  }
  cout << endl;
}

void passing_pointers_2() {
  int a{100}, b{200};
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  swap(&a, &b);
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
}

static void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void passing_pointers_3() {
  vector<string> persons{"Larry", "Susan", "Justin", "Zoe"};
  display(&persons);
}

void display(const vector<string>* persons) {
  for (const auto& person : *persons) {
    cout << person << " ";
  }
  cout << endl;
}

void passing_references() {
  vector<string> persons{"Larry", "Susan", "Justin", "Zoe"};
  vector<int> scores{1, 5, 90, 87, 7, 89, 11};
  const vector<string>& personsRef = persons;
  display(persons);
  display(personsRef);
  display(scores);
}

void display(const vector<string>& persons) {
  for (const auto& person : persons) cout << person << " ";
  cout << endl;
}

void display(const vector<int>& scores) {
  cout << "Displaying scores..." << endl;
  for (const auto& score : scores) {
    cout << score << " ";
  }
  cout << endl;
}
