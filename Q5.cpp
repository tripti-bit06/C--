/* A student wants to swap the values of two 
  variables for practising coding basics.
  Implement a solution to swap two numbers 
  using different techniques.

*/


#include<iostream>
using namespace std;
int main()
{
    char var, var1, temp;

    cout << "Enter 1st variable : ";
    cin>> var;

    cout << "Enter 2nd variable : ";
    cin>> var1;

    cout<< "\nNOW SWAPPING THE VARIABLES";
    
    temp = var;
    var = var1;
    var1 = temp;

    cout<< "\nThe value for 1st variable : "<< var;
    cout<< "\nThe value for 2nd variable : "<< var1;

    return 0;

}

/*  #include<algoritm>
    using name space;
    swap(a,b);

    or 

    std::swap(a,b)

    or

    a = a + b;
    b = a - b;
    a = a - b;

    or 


    a = a * b;
    b = a / b;
    a = a / b;

    

*/