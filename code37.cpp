// friend function
# include <iostream>
using namespace std;
class xyz;
class abc{
    int num1;
    public:
    abc(int x){
        num1 = x;
    }
    friend void add(abc,xyz);
};
class xyz{
    int num2;
    public:
    xyz(int y){
        num2 = y;
    }
    friend void add(abc,xyz);
};
void add (abc a1,xyz x1){
    int sum; //local variable function add
    sum = a1.num1 + x1.num2;
    cout<<sum;
}
int main(){
    abc a1(10);
    xyz x1(20);
    add(a1,x1);
}