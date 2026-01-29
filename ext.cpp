// WAP to add two numbers using classes and objects
#include<iostream>
using namespace std;
class Addition
{ 
    int a,b;
    int sum;
    public:
    void getdata();
    void Display();

};

void Addition::getdata() // scope resolution operator
{
    cout << "Enter first number:";
    cin >>a;
    cout << "Enter second number:";
    cin >>b;
    
}

void Addition::Display()
{
    sum = a + b;
    cout << "Sum = " << sum;
}

int main()
{
    Addition a1;
    a1. getdata();
    a1.Display();
    return 0;
}