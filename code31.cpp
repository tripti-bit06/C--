/*Design a C++ program using multilevel inheritance to manage employee salary details.
 Create a base class Employee that stores employee ID and name, and includes a function
 to input these details. Derive a class Salary from Employee that stores the base salary
 and includes a function to input the salary. Further derive a class Bonus from Salary
that stores the bonus amount and includes a function to calculate the total salary.
The total salary should be calculated as the sum of base salary and bonus. Use only
one function in each class, and create an object of the Bonus class to access all the
functionalities. */


#include<iostream>
#include<string>
using namespace std;

// Base class
class Employee {
    string empName;
    int empId;

public:
    void inputDetails() {
        cout << "Enter Employee name and Employee Id: ";
        cin >> empName >> empId;

        cout << "Employee Name is: " << empName << endl;
        cout << "Employee Id is: " << empId << endl;
    }
};

// Derived class 1
class Salary : public Employee {
protected:
    float salary;

public:
    void inputSalary() {
        cout << "Enter salary of the employee: ";
        cin >> salary;

        cout << "Salary of the employee is: " << salary << endl;
    }
};

// Derived class 2
class Bonus : public Salary {
    float bonus, totalSalary;

public:
    void calculateTotalSalary() {
        cout << "Enter Bonus amount: ";
        cin >> bonus;

        totalSalary = salary + bonus;

        cout << "Total Salary is: " << totalSalary << endl;
    }
};

int main() {
    Bonus b1;

    b1.inputDetails();      // from Employee
    b1.inputSalary();       // from Salary
    b1.calculateTotalSalary(); // from Bonus

    return 0;
}