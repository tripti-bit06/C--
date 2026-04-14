#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    float age;
    public:
    void displayDetails(){
        cout<<"Enter Name = ";
        cin>>name;
        cout<<"Enter Age = ";
        cin>>age;
    }
};
class StudyMarks:public virtual Student{
    protected:
    float marks;
    public:
    void ShowMarks(){
        cout<<"Enter marks: ";
        cin>>marks;
    }
};
class ActivityMarks:public virtual Student{
    protected:
    float sportsmarks;
    public:
    void showSportMarks(){
        cout<<"Enter sports marks: ";
        cin>>sportsmarks;
    }
};
class TotalMarks:public StudyMarks,public ActivityMarks{
    float totalmarks;
    public:
    void showTotalMarks(){
        totalmarks = marks + sportsmarks;
        cout<<"Total Marks are: "<<totalmarks;
    }
};
int main(){
    TotalMarks t1;
    t1.displayDetails();
    t1.ShowMarks();
    t1.showSportMarks();
    t1.showTotalMarks();
}