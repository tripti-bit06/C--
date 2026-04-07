/*1. Create a class Laptop with the following data members:
. Brand
. RAM
. Price
Z. Implement function overloading using a function called setDetallasD:
attDetallaistring btand)
a sets afly the brand
setDetallajstring brand, int ram)
+ sets brand and RAM
setDetalagstring brand, int ram, int price)
+ sets brand, RAM, and price
3. Create another function displayt to show the laptop details.
4. In the maind function
Create thiee laptop objects
. Call different overloaded stDstalat) functions for each object.
e Display the laptop information.*/

#include <iostream>
using namespace std;

class Laptop
{
    string brand;
    int ram;
    int price;

public:
    // set only brand
    void setDetails(string b)
    {
        brand = b;
        ram = 0;
        price = 0;
    }

    // set brand and RAM
    void setDetails(string b, int r)
    {
        brand = b;
        ram = r;
        price = 0;
    }

    // set brand, RAM and price
    void setDetails(string b, int r, int p)
    {
        brand = b;
        ram = r;
        price = p;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "RAM: " << ram << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
};

int main()
{
    Laptop l1, l2, l3;

    l1.setDetails("Dell");
    l2.setDetails("HP", 8);
    l3.setDetails("Lenovo", 16, 75000);

    l1.display();
    l2.display();
    l3.display();

    return 0;
}