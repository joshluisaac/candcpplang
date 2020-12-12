#include <iostream>
#include <string>
#include <vector>

using namespace std;
void print(int* numPtr);
void sizeOfPointers();

int main() {
    int num{10};
    int* numPtr = &num;
    cout << "Value of num is: " << num << endl;
    cout << "Size of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;
    print(&num);
    cout << (numPtr == &num) << endl;
    print(numPtr);  // this is also valid given that numPtr == &num
    *numPtr = 50;
    print(numPtr);
    cout << "Value of num is: " << num << endl;
    cout << "Size of num is: " << sizeof num << endl;
    cout << "Address of num is: " << &num << endl;

    sizeOfPointers();
    return 0;
}

void print(int* numPtr) {
    cout << ".......Printing......." << endl;
    cout << "Value of numPtr is: " << numPtr << endl;
    cout << "(Dereferencing) value of what numPtr point to is: " << *numPtr
         << endl;
    cout << "Size of numPtr is: " << sizeof numPtr << endl;
}

// void arrayPointers(){
//   string[] names = ["Sammy", "James", "Janiyah"];

// }

void structPointers() {
    struct Person {
        int age;
        string name;
        string address;
    };
}

void sizeOfPointers() {
    int* p1{nullptr};
    double* p2{nullptr};
    unsigned long long* p3{nullptr};
    vector<string>* p4{nullptr};
    string* p5{nullptr};
    cout << "Printing null pointers of different types" << endl;
    cout << "Size of p1 is: " << sizeof p1 << endl;
    cout << "Size of p2 is: " << sizeof p2 << endl;
    cout << "Size of p3 is: " << sizeof p3 << endl;
    cout << "Size of p4 is: " << sizeof p4 << endl;
    cout << "Size of p5 is: " << sizeof p5 << endl;
}