#include "dereferencing.h"
#include "iostream"

template <class T>
T max(T const& t1, T const& t2) {
    return t2 < t2 ? t2 : t1;
}

int main() {
    execute();
    return 0;
}
