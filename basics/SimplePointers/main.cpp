#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){

    int num = 10;
    int *numPtr = nullptr;
    numPtr = &num;
    cout << "Value of num is: " << num << endl; 
    cout << "Size of num is: " << sizeof num << endl; 
    cout << "Address of num is: " << &num << endl; 

        cout << "Value of num is: " << num << endl; 
    cout << "Size of num is: " << sizeof num << endl; 
    cout << "Address of num is: " << &num << endl; 
    return 0;
}