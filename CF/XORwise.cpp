#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        /*int m = INT_MAX;
        for(int i=0; i<a+b; i++){
            m = min((a^i)+(b^i), m);
        }*/
        cout<<(b^a)<<"\n";
    }
}