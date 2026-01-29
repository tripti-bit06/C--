#include <iostream>
using namespace std;

class Age
{
private:
    int num;

public:
    void getData()
    {
        cout << "Enter your age : ";
        cin >> num;
    }
    void display()
    {
        if (num >= 18)
        {
            cout << "Your eligible to vote.";
        }
        else if (num <= 0 || num > 120)
        {
            cout << "Invalide age ";
        }
        else
        {
            cout << "Your not eligible to vote.";
        }

        //  cout << (age >= 18 ? "Eligible to vote" : "Not eligible to vote");
    }
};

int main()
{
    Age obj;
    obj.getData();
    obj.display();

    return 0;
}