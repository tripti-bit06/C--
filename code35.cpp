# include <iostream>
using namespace std;
class abc{
    string name;
    int age;
    public:
    abc(string name, int age){
        this->name = name;
        this->age = age;
    }
};
int main(){
    abc a1("Rahul", 20);
}