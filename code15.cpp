/*The class should have the following member functions:
. setCandy(string c, int p): Sets the color and points of the candy
. displayCandy(): Disptays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy
method, and display them using displayCandy().*/

// Attributes means data member 

#include <iostream>
#include <string>
using namespace std;

class Candy {
    string color;
    int points;

public:
    void setcandy(string c, int p) {
        color = c;
        points = p;
    }

    void displaycandy() {
        cout << "The color of the candy is: " << color << endl;
        cout << "The points awarded to the user is: " << points << endl;
    }
};

int main() {
    int a, b;
    Candy c1;
    c1.setcandy("Red", 89);
    c1.displaycandy();

    return 0;
}

// class is also a user defined data type so we can have multiple object os same class 