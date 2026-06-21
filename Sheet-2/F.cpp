#include<iostream>
#include <vector>
using namespace std;

int main(){
    long long n,q; cin>>n>>q;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<long long> diff(n+2);
    vector<long long> prefix(n+2);
    while(q--){
        long long l,r,v; cin>>l>>r>>v;
        diff[l]+=v; diff[r+1] -=v;
    }
    for(int i=1; i<n+1; i++){
        prefix[i] += prefix[i-1]+diff[i];
    }
    for(int i=0; i<n; i++){
        a[i]+=prefix[i+1];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

/*learnt about prefix array and difference array and their sum */