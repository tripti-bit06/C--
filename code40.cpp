#include<iostream>
#include<fstream> 
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 2 no.";
    cin>> a>>b;
    try{
        if (b==0)
        {throw b}
        catch(int x){
            cout<<"Division by 0"<<x;
        }
    }
}
