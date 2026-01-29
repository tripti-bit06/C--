/* An architect wants to calculate the space covered by a circular fountain. Implement a solution to
   compute the area of a circle.*/

   #include<iostream>
   using namespace std;

  class Area 
  {
  private: 
    int num;
    float area;

    public:
    void getData()
    {
        cout << "Enter radius of circle  ";
        cin >> num ;  
    }

    void calculate()
    {
        area = num * num * 3.14;
    
    }

    void display()
    {
        cout << "Area of the circle is:  "<< area;
    }

  };
  int main(){
    Area obj;
    obj.getData();
    obj.calculate();
    obj.display();

  }
