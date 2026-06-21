#include<iostream>
using namespace std;

int main(){
    double a; cin>>a;
    int b = a;
    if(a-b>0) cout<<"float "<<b<<" "<<a-b;
    else cout<<"int "<<a;
}