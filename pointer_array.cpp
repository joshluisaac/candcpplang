#include <iostream>

using namespace std;

int main() {
    int someArray[10] = {1, 3, 4, 90, 89, 4};
    int* someArrayPtr = &someArray[0];
    cout << &someArray << endl;
    cout << &someArray[0] << "\n";
    for (int i = 0; i < 10; i++) {
        cout << someArray + i << endl;
    }
    return 0;
}