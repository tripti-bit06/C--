/* A payroll system maintains employee salary records. Implement a solution to accept salary of
10 employees in an array, compute total salary and average salary, then display the result.*/

#include<iostream>
using namespace std;

int main()
{
    float salary[10];
    float total = 0, avg;

    cout<<"Enter salary of 10 employees:\n";

    for(int i=0;i<10;i++)
    {
        cin>>salary[i];
        total = total + salary[i];
    }

    avg = total / 10;

    cout<<"Total salary = "<<total<<endl;
    cout<<"Average salary = "<<avg<<endl;

    return 0;
}