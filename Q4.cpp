/* 
A shopkeeper wants to calculate the total bill 
amount after applying a 20% discount on the purchase.
Implement a solution to accept item no., quantity, and
unit price. Compute the amount and apply 20% discount

*/

#include<iostream>
using namespace std;

int main()
{
    int item;
    int quantity;
    float price, totalamt, discount, finalamt;
    cout<< "Enter item no. :";
    cin >> item ;

    cout<< "Enter quantity :";
    cin >> quantity ;

    cout << "Enter unit price :";
    cin>> price;

    totalamt = quantity * price;
    discount = 0.20 * totalamt;
    finalamt = totalamt - discount;

    cout << "\nItem Number: " << item;
    cout << "\nTotal Amount: " << totalamt;
    cout << "\nDiscount (20%): " << discount;
    cout << "\nFinal Bill Amount: " << finalamt;

    return 0;

}