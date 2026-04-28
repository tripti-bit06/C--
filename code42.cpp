
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={10,20,30,40};
    //Modify elements
    for(int i=0;i<v.size();i++){
        v[i]+=5;
    }
    //Print using range loop
    for(int x:v){
        cout<<x<<" ";
    }
}