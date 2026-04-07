#include <iostream>
using namespace std;

class Product
{
    string productName;
    float price;
    int quantity;

public:
    // Constructor
    Product(string name, float p, int q)
    {
        productName = name;
        price = p;
        quantity = q;
    }

    // Function to calculate total cost
    void totalCost()
    {
        float total = price * quantity;
        cout << "Product: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Cost: " << total << endl << endl;
    }

    // Destructor
    ~Product()
    {
        cout << "Product " << productName << " removed from memory." << endl;
    }
};

int main()
{
    Product p1("Laptop", 50000, 1);
    Product p2("Headphones", 2000, 2);

    p1.totalCost();
    p2.totalCost();

    return 0;
}