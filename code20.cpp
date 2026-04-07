/*III.

Electricity Billing System (Function Overloading)

An electricity board wants to design a billing system that calculates electricity charges
for different types of consumers. The billing rules are:
. If only units consumed are provided + calculate bill at ₹5 per unit.
· If units + rate per unit are provided > calculate accordingly.
. If units + rate + fixed charge are provided + add fixed charge to total bill.
Requirements:
1. Create a class ElectricityBill.
2. Implement function overloading for a function named calculateBill():
calculateBill(int units)
calculateBill(int units, float rate)
calculateBill(int units, float rate, float fixedCharge)
3. Display the calculated bill in each case.
4. In main(): Call all three overloaded functions using different arguments.*/


#include <iostream>
using namespace std;

class ElectricityBill
{
public:
    
    // Case 1: Only units provided (₹5 per unit)
    void calculateBill(int units)
    {
        float bill;
        bill = units * 5;
        cout << "Bill (Default rate ₹5/unit): ₹" << bill << endl;
    }

    // Case 2: Units and rate provided
    void calculateBill(int units, float rate)
    {
        float bill;
        bill = units * rate;
        cout << "Bill (Custom rate): ₹" << bill << endl;
    }

    // Case 3: Units, rate and fixed charge provided
    void calculateBill(int units, float rate, float fixedCharge)
    {
        float bill;
        bill = (units * rate) + fixedCharge;
        cout << "Bill (Rate + Fixed charge): ₹" << bill << endl;
    }
};

int main()
{
    ElectricityBill e;

    e.calculateBill(100);                // Case 1
    e.calculateBill(100, 6.5);           // Case 2
    e.calculateBill(100, 6.5, 50);       // Case 3

    return 0;
}
