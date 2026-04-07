/*WAP to print your father 's name and age 
in derived class print your name and age through derived class constructor*/

#include<iostream>
#include<string>
using namespace std;

// Base class
class Base {
    int x;
    string p;

public:
    Base(int a, string b) {
        x = a;
        p = b;

        cout << "Base x: " << x << endl;
        cout << "Base p: " << p << endl;
    }
};

// Derived class
class Derived : public Base {
    int y;
    string q;

public:
    Derived(int a, string b, int c, string d) : Base(a, b) {
        y = c;
        q = d;

        cout << "Derived y: " << y << endl;
        cout << "Derived q: " << q << endl;
    }
};

int main() {
    Derived d(42, "Anil", 19, "Tripti");
    return 0;
}