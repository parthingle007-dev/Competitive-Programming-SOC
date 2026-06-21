#include<iostream>
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    int max = INT_MIN;
    int min = INT_MAX;
    if(max<a) max=a;
    if(max<b) max=b;
    if(max<c) max=c;
    if(min>a) min=a;
    if(min>b) min =b;
    if(min>c) min=c;
    cout<<min<<" "<<max;
}