#include<iostream>
using namespace std;

int main(){
    int n,num;

    while (1){

        cout << "Enter the no. for the table : ";
        cin >> n;

        if(n>0){
            for (int i = 1; i<=10; i++){
                num = n*i;
                cout << num << endl;

                
            }
        }

        else if(n == 0){
            cout<<"End of the program";
        }

    }
}