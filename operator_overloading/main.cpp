
#include <iostream>

#include "Accum.h"
using namespace std;

int main() {
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum<string> strings(string(""));
    strings += "hello";
    strings += " world";
    cout << strings.GetTotal() << endl;
    return 0;
}
