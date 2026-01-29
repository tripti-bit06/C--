/*A teacher wants to calculate the average marks of three students to determine the class performance.
Implement a solution to accept three numbers and compute their average.using classes*/


#include<iostream>
using namespace std;

class Average
{
private:
    int m1, m2, m3;
    float avg;

public:
    void getData()
    {
        cout << "Enter marks of 1st students: ";
        cin >> m1 ;
        cout << "Enter marks of 2nd students: ";
        cin >> m2;
        cout << "Enter marks of 3rd students: ";
        cin >> m3 ;
    }

    void calculate()
    {
        avg = (m1 + m2 + m3) / 3.0;
    }

    void display()
    {
        cout << "Average marks = " << avg;
    }
};

int main()
{
    Average obj;
    obj.getData();
    obj.calculate();
    obj.display();
    return 0;
}
