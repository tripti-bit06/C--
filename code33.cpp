//create a class study marks which stores the marks scored by a student in studies.
//create a class activity marks which stores the marks scored by student in extracurricular activities
//create a class total marks which is derived from study marks and activity marks and it stores the total marks as the sum of study marks and activity marks
//In main function create an object of total marks and call all the other functions which are present in base classes.

#include <iostream>
using namespace std;

// Base class 1
class StudyMarks {
protected:
    int study;

public:
    void setStudyMarks(int s) {
        study = s;
    }

    void displayStudyMarks() {
        cout << "Study Marks: " << study << endl;
    }
};

// Base class 2
class ActivityMarks {
protected:
    int activity;

public:
    void setActivityMarks(int a) {
        activity = a;
    }

    void displayActivityMarks() {
        cout << "Activity Marks: " << activity << endl;
    }
};

// Derived class
class TotalMarks : public StudyMarks, public ActivityMarks {
private:
    int total;

public:
    void calculateTotal() {
        total = study + activity;
    }

    void displayTotal() {
        cout << "Total Marks: " << total << endl;
    }
};

// Main function
int main() {
    TotalMarks student;

    student.setStudyMarks(80);
    student.setActivityMarks(20);

    student.displayStudyMarks();
    student.displayActivityMarks();

    student.calculateTotal();
    student.displayTotal();

    return 0;
}