# include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int *ptr = new int[size];
    for(int i = 0;i<size;i++){
        cin>>ptr[i];
        cout<<ptr[i];
    }
}