#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter your number : ";
    cin >> num;

    if (num < 0)
    {
        cout << "Entered number is negative";
    }
    else if (num == 0)
    {
        cout << "YOU ENTERD ZERO";
    }
    else if (num % 2 == 0)
    {
        cout << "EVEN NO. ";
    }
    else
    {
        cout << "ODD NO. ";
    }

    return 0;
}