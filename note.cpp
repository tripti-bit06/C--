// There are 2 ways of declare class. 
// We can declare class which consists of data members functionmember function are defined outside the class by using scope resolution operator        
// Member function are defined inside the class by using scope , resolution & operatuor
// We can define the class by declaring data members and member function inside the class // members function are also defined outside the class
// We do not need thr scope resolution method
// In c & c++ the execution of a programm starts with main function 


/*Cn take character by character ,when we are fetching input from terminal input is stored
 in bffer & we are trying to fetch the input from buffer , buffer contain cointains empty 
 space also as cn encounter thatempty space fromthe buffer it asssumes that the string is 
 terminated & it shows that part of the string which comes before the empty string , it shows 
 that part of the string only which comes before the empty character .*/

 /* when we are taking the string input imidiatelly after any other data type input we need to use the cin .*/

 

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//      string name;
//      getline(cin , name);
//      /* gteline function reads the entire line & it does not ignore
//       the space which where present in the buffer memory */
//      cout << "The name is : "<< name;
     
//      return 0;

// }

/* A function is also known as object oriented programming */


/* return type (for prototype) function name (no.of arguments) 


types of function based on return type and number of arguments 

1) function with no return type & no arguments

2) function with return type & no arguments 
int sum ()
{c = a + b;
retrn c;}

3) function with no return type but have arguments
void sum (int a, int b ){
c = a + b;
cout << c}

4) functions with return type & arguments 
int sum ( int a , intb){
c = a + b ;
return c; }*/

/* function overloading question 
   debugging  
   *ss* topics that we have not covered in class c++, but have already studied in c & will somehow appear in exam .*/

   /* Inheritarnce is the mechanism of aquiring one class's property by another class.

   The class from which the properties are derived are known as base class super class or parent class

   The class which aquires the property is known as derived class ,subclass or child class
   
  Only public & protected can be inherit by anyone but private cannot inherited
  
  ------------ Types of inheritance ---------------
  
  Single level inheritance :- where there is only one based class and one derived class
  
  Multi level inheritance:- there are multilple levels of single level of inheritance, 
  in this the child of one class can be parent of another class 
 
  Multiple inheritance:- When a derived class aquire properties from more then one parent 
  
  Hybrid inheritance:- which is a combination of multi level and multiple inheritance 
  
  Hirachical inheritance:- when multiple classes can be derived from a single class & 
  those multiple classes can also act as an base class for other derived classes       */


  // if we are deriving base class in public mode, so all the public data of base class will be inheritened in derived class+ 
   

 // ------------------- Counstructor inheritance ----------------------

 /*  wap to demonstrate the usage of constructor in single inheritance

#include <iostream>
using namespace std;
class Base 
{
    public:
    Base()
{
cout << "Base class constructor";
}
};
class Derived public Base{
    public:
    derived()
    {
        cout << "derived class constructor";
    }
};

int main()
{
    Derived d;
    return 0;
}

 whenever we create a derived class constructor its mandar=tory tocreate a base line constructor.
 It is the responsiblity of derived class object to call the base class cnstructor also.


PARAMETERIZED CONSTRUCTORS IN INHERITANCE
*/

// private data is private to that particular class it cannot be used by inherited class or outside the class(main function) 
// Protected data lies b/w private & public which means it can be accessed by inherited class but it cannot be accessd 
// outside the class (main function)

//------------------------- Multiple Inheritance --------------------------

//protected data members and member functions are accessible to derived classes but inaccessible to main function 
// while public data members and meme functions are accessible to derived classe,all other classes(which are not derived and
//to the main function also but to access the public data we always need an object,private data is inaccesible to any class)

/*                                Modes of inheritance :

BASE CLASS              PUBLIC                   PROTECTED                        PRIVATE 
MEMBERS:                INHERITANCE:             INHERITANCE:                     INHERITANCE:

PUBLIC                  PUBLIC                   PROTECTED                        PRIVATE

PROTECTED               PROTECTED                PROTECTED                        PRIVATE

PRIVATE                 NA                       NA                               NA



*/  



// Acces specifier : Private , Protected , public

// When we are deriving a classs in private mode , all the Private ,
// protected & public data becomes the private data of derived class 

/*  

when the child clss recieves the super base class properties via two parents,
so the child class gets the extra copy of super base class data members and memeber
functiomns,in this case we will be using virtua innheritance, which means when we 
are going to apply virtual keyword before the class so that my child classs recives 
only one copy of superbase class data members and member functions.
*/