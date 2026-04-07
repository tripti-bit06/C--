// wap to add two numbers 
#include<iostream>
using namespace std;
class Addition{
   
    public:
    int sum(int a,int b){
        return a+b;
    }
};
int main(){
    Addition a1;
    int sum_two=a1.sum(8,9);
    cout<<sum_two;

}