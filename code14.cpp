/* WAp to find largest among 3 number by using all these function types by classes & object*/

#include <iostream>
using namespace std;

class Largest{
    int a , b ,c;

    public :

    void data(){
        cout<< "Enter 1st no. : ";
        cin>> a;
        cout<< "Enter 2nd no. : ";
        cin >> b;
        cout<< "Enter 3rd no. : ";
        cin >> c;

    }

    void check(){
         if(a>b && a>c){
                cout << "largest = " <<a;
            }
            else if (b>c && b>a){
                cout << "largest = " <<b;
            }
            else if (c>a && c>b){
              cout << "largest = " <<c;
            }
            else {
                cout << "Two or three nums are same" ;
            }
        }

    };

    int main(){

        Largest obj;
        obj.data();
        obj.check();

        return 0;
    }
    

