/*2.Write a C++ program to demonstrate function overloading by creating multiple
functions named volume:

· One function to calculate the volume of a cube (side)

· One function to calculate the volume of a cuboid (length, breadth, height)

· One function to calculate the volume of a cylinder (radius, height)

Call all the overloaded volume functions in the main() function and display the
I

calculated volumes.*/

#include <iostream>
using namespace std;

// Volume of Cube
double volume(double side) {
    return side * side * side;
}

// Volume of Cuboid
double volume(double length, double breadth, double height) {
    return length * breadth * height;
}

// Volume of Cylinder
double volume(double radius, double height) {
    return 3.14 * radius * radius * height;
}

int main() {

    double side, l, b, h, r, hc;

    // Input
    cout << "Enter side of cube: ";
    cin >> side;

    cout << "Enter length, breadth and height of cuboid: ";
    cin >> l >> b >> h;

    cout << "Enter radius and height of cylinder: ";
    cin >> r >> hc;

    // Function Calls
    cout << "\nVolume of Cube = " << volume(side);

    cout << "\nVolume of Cuboid = " << volume(l, b, h);

    cout << "\nVolume of Cylinder = " << volume(r, hc);

    return 0;
}