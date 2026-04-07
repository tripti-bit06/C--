//CREATE A CLASS ANIMAL WHICH CONTAINS A FUNCTION EAT
//CREATE A CLASS DOG WHICH IS INHERITED FROM ANIMAL CLASS AND CONTAINS ITS OWN FUNCTION BARK.
//CREATE AN OBJECT OF DERIVED CLASS WHICH IS ABLE TO ACCESS BOTH THE FUNCTIONS EAT AND BARK.
// create function lion and add lion roar 
// create an object of lion class and acesss th base class method and derived class method 


#include<iostream>
using namespace std ;


class Animal {
    public :
    void eat(){
        cout<<"Animal class eats ";

    }
};

class Dog : public Animal {
    public :
    void bark(){
        cout <<"Dog barks ";
    }
};

class Lion : public Animal {
    public :
    void roar(){
        cout<<"Lion roar ";
    }
};
int main (){
    Dog d1;
    Lion l1;
    d1.eat();
    d1.bark();


    l1.eat();
    l1.roar();


    return 0;

}

// can animal have the acess to bark function  no 


