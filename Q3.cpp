/* A weather app developer needs to provide
   both Celsius and Fahrenheit readings. Implement 
   a solution toconvert Fahrenheit temperature into 
   Centigrade or vice versa.
*/
#include <iostream>
using namespace std; 

int main(){

 float f, c;

cout << "Write the tempertaure in degree fahrenhiet ";
cin >> f;

c = (f - 32)*5/9;

cout << "\ntemperature in degree celcius is " << c;
return 0;

}

