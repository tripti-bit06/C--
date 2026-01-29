/* A student wants to swap the values of two
  variables for practising coding basics.
  Implement a solution to swap two numbers
  using different techniques.

*/

#include <iostream>
using namespace std;

class Swap
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter a no. in a : ";
        cin >> a;
        cout << "Enter a no. in b : ";
        cin >> b;
    }

    void calculate()
    {
        a = a * b;
        b = a / b;
        a = a / b;
    }

    void display()
    {
        cout << "\nValue of a after swap : " << a;
        cout << "\nValue of b after swap : " << b;
    }
};
int main()
{
    Swap obj;
    obj.getData();
    obj.calculate();
    obj.display();

    return 0;
}