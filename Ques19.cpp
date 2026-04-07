/* A network security system generates prime numbers in a range for encryption key pools. Implement a
solution to find all prime numbers within a given range. */

#include<iostream>
using namespace std;

int main(){
    int start;
    int end;

    cout<<"Enter starting no. :";
    cin >> start;

    cout<<"Enter ending no. :";
    cin >> end;

    for(int i = start ; i <= end ; i++){

        int count = 0;

        for(int j = 2 ; j <= i/2; j++)
        if(i % j == 0){
            count++;
            break;
        }

        if(count == 0 && i > 1){
        cout<< i << " ";
    }
    }

   

    return 0;

}