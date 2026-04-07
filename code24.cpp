/*An online learning platform wants to store course information.
Each course should contain:
•
Course name
•
Instructor name
•
Course duration (weeks)
Questions
1.
Create a class Course.
2.
Initialize course details using a constructor.
3.
Write a function to display course details.
4.
Create two course objects.
5.
Add a destructor that prints a message when a course object is deleted.*/

#include <iostream>
#include <string>
using namespace std;

class Course{
    string course;
    string instructor ;
    int duration ;
    public:
    Course(string i, string n , int o){
        course = i;
        instructor = n ;
        duration = o ;
    }


 // Display function
    void display() {
        cout << "Course Name: " << course<< endl;
        cout << "Instructor: " << instructor << endl;
        cout << "Duration: " << duration << " weeks" << endl;
    }

    // Destructor
    ~Course() {
        cout << "Course object deleted" << endl;
    }
};

int main() {

    Course c1("C++ Programming", "Rahul", 6);
    Course c2("Web Development", "Anita", 8);

    c1.display();
    cout << endl;
    c2.display();

    return 0;
}