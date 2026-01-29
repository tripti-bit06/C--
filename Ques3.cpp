/* A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement
   a solution toconvert Fahrenheit temperature into Centigrade or vice versa.*/
#include <iostream>
using namespace std;

class Temp
{
private:
    float cel, freh;

public:
    void getData()
    {
        cout << "Enter temprature in fahrenhiet : ";
        cin >> freh;
    }

    void calculate()
    {
        cel = (freh - 32) * 5 / 9;
    }

    void display()
    {
        cout << "Temprature in Celcius : " << cel;
    }
};

int main()
{
    Temp obj;
    obj.getData();
    obj.calculate();
    obj.display();
}