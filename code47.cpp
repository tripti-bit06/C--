#include<iostream>
#include<set>
using namespace std;
int main(){
    map<int,string>m;
    m.insert({1,"Apple"});
    m.insert({2,"Banana"});
    if(m.find(2) != m.end()){
        cout<<"Found\n";
        m.erase(2);
        for(auto x: m){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}