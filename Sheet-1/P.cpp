#include<iostream>
using namespace std;

int main(){
    string a; cin>>a;
    if((a[0]-'0')%2==0){
        cout<<"EVEN";
    }else cout<<"ODD";
}