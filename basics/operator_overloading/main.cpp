#include <iostream>

using namespace std;

class OperatorOverloading {
   private:
    int count;

   public:
    OperatorOverloading() : count(5) {}
    void operator++() { count = count + 1; }

    void print() { cout << "Count: " << count << endl; }
};

int main(int argc, const char* argv[]) {
    OperatorOverloading opl;
    ++opl;
    opl.print();
    return 0;
}
