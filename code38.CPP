// WAP to add theobj using operator overloading 
# include <iostream>
using namespace std;

class sample{
    int num;
    public:
    sample(int x = 0){
        num = x;
    }
    sample operator+(sample x1){
        sample temp;
        temp.num = num + x1.num;
        return temp;
    }
    void display(){
        cout<<num;
    }
};
int main(){
    sample s1(24);
    sample s2(40);
    sample s3;
    s1.display();
    s2.display();
    s3.display();
    s3 = s1+(s2);
    s3.display();
}

// this is default argument , when we will not pass any variable as an argument in obj creation it will take no. will be initialize to zero by default 
 
// s1 is calling operator plus & s2 is passed as an argument in operation function
// the value of s2 will be passed onto s1 

// local obj of sample class which will store the sum of two obj 

/*---------------- Operator overloadind using friend function -------------

when we will use operator overloadind by using friend function  two operator
 will be passes as and we will be anle to work on operator overload
 */