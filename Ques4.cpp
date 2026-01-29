/*
A shopkeeper wants to calculate the total bill
amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and
unit price. Compute the amount and apply 20% discount

*/

#include <iostream>
using namespace std;

class Discount
{
private:
    int item, quant;
    float price, dis, Tamt, f;

public:
    void getData()
    {
        cout << "Enter item no. : ";
        cin >> item;
        cout << "Enter quantity no. : ";
        cin >> quant;
        cout << "Enter price no. : ";
        cin >> price;
    }

    void calculate()
    {
        Tamt = price * quant;
        dis = 0.20 * Tamt;
        f = Tamt - dis;
    }

    void display()
    {
        cout << "The amount after 20 percent discount :  " << dis;
    }
};
int main()
{
    Discount obj;
    obj.getData();
    obj.calculate();
    obj.display();

    return 0;
}