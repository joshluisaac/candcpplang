#include <iostream>

using namespace std;

void testPointer(){
    //an integer assignment
    int x = 50;
    //a pointer to an int
    int *p = &x;
    //a pointer to a pointer
    int **q = &p;
    cout << "The value at address: " << &x << " is " << x <<  endl;
    cout << "The value at address: " << p << " is " << *p <<  endl;
    cout << "The value at address: " << *q << " is " << **q <<  endl;
}


int main(int argc, const char * argv[]) {
    testPointer();
    return 0;
}


