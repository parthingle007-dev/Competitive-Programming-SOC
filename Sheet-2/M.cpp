#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n,0);
    vector<int>f(100001,0);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        f[a[i]] = 1;
    }
    vector<int> prefix(100002,0);
    for(int i=1; i<=100001; i++){
        prefix[i]=prefix[i-1]+f[i];
    }
    while(q--){
        int t; cin>>t;
        cout<<prefix[t-1]<<" "<<prefix[100000]-prefix[t]<<'\n';
    }
    
} 