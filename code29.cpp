/*wap to print two numbers
 the first num shall be initalized through based class constructor,
second num shall be initialized through direct class instructor*/

#include <iostream>
using namespace std;

// Base class
class Base {
    int x;

public:
    Base(int a) {
        x = a;
        cout << "Base constructor called, x = " << x << endl;
    }
};

// Derived class
class Derived : public Base {
    int y;

public:
    Derived(int a, int b) : Base(a) {
        y = b;
        cout << "Derived constructor called, y = " << y << endl;
    }
};

int main() {
    Derived d(5, 10);
    return 0;
}