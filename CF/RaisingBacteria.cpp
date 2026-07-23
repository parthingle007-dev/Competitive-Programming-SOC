#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int x=1;
    int c=0;
    while(x<=n){
        if(x&n) c++;
        x = x<<1;
    }
    cout<<c;
}