/*Cane Study: Mobils Phone Store
A meblle stone wons to maintain informition about d fferenit mobie phonts.
Sometime the store knowe only the brand, somal mes it knows brand and price, and
sometimes tknows brand, prioe, and atorage capebity.
Prablern Stalement
Deligha class Meble that stores the folowing intormation

Prict

Raquisements
1. Implemene eenstructor overloading with the following conilructors:
D Acontruptor thet initilices only the brend
Aconotrustor that initializes brand and price
e Aconetructor thet initialites brand, price, and stornge
2. Wrhe a display function to print the moble detals.
3. Onsate three objocts using diflerent constructors
4. Dispiay the detsiis of asch moble.

I*/

#include<iostream>
#include<string>
using namespace std;

class Mobile {
    string brand;
    int price;
    int storage;

public:

    // Constructor 1: only brand
    Mobile(string b) {
        brand = b;
        price = 0;
        storage = 0;
    }

    // Constructor 2: brand and price
    Mobile(string b, int p) {
        brand = b;
        price = p;
        storage = 0;
    }

    // Constructor 3: brand, price, storage
    Mobile(string b, int p, int s) {
        brand = b;
        price = p;
        storage = s;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << endl;
    }
};

int main() {

    Mobile m1("Samsung");          // only brand
    Mobile m2("Apple", 80000);     // brand + price
    Mobile m3("OnePlus", 45000, 256); // brand + price + storage

    m1.display();
    m2.display();
    m3.display();

    return 0;
}