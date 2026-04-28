// WAP to read the data from console and write the data in a text file named as student 

// Now I went to read thye data from student text file and print  the output on console screen, 
// to work with file handling we need f stream header file 


#include<iostream>
#include<fstream> // f stream is library which is used to work with files 
using namespace std;

int main ()
{
    string name;
    int age;
    ofstream fout; // fout is a user diffend obj of of stram. We can have any name of this object 

    fout.open("student txt");
    cout << "Enter name & age ";
    cin >>name;   
    cin >> age;
    fout<<name <<endl; 
    fout<<age;
    fout.close();
    ifstream fin;
    //whatever name of the object user have kept that 0bject will be used
    // for working with files but for simplicity purpose we can take the 
    //name of the object as fout and fin..
    fin.open("student txt"); 
    // open is the command or predefined function to open a file & we have 
    // to mention the complete part of     . if the file exisy object will 
    // do the operation on exisiting file but if the file doesnot exist the 
    // object creates the file iin in the specified path & if part is not 
    // given then file is created in the same directory where we are working 
   
   
    fin >> name;
    fin >> age;
    cout << name;
    cout << age;
    fin.close();
}

// file stream close my student.txt file 

// fin is the input file stream obj which is or which will be reading data fro the file 