// WAP to add, subtract, multiply and divide

#include <iostream>
using namespace std;
int main ()
{
    int num1, num2;
    int sum;
    int sub;
    int mul;
    int divd;
    cout << "Enter first no.";
    cin >> num1;

    cout << "Enter 2nd no.";
    cin >> num2;

    sum = num1 + num2;
    cout << "\nThe sum of two no. is: " << sum;

    sub = num1 - num2;
    cout << "\nThe subtraction of two no. is: " << sub;

    mul = num1 * num2;
    cout << "\nThe multiplication of two no. is: " << mul;

    divd = num1/num2;
    cout << "\nThe division of two no. is: " << divd;

    return 0;



}