#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    long long n,q; cin>>n>>q;
    vector<long long> a(n,0);
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    while(q--){
        string Q; cin>>Q;
        if(Q=="pop_back"){
            a.pop_back();
        }
        if(Q=="front"){
            cout<<a[0]<<'\n';
        }
        if(Q=="back"){
            cout<<a[a.size()-1]<<'\n';
        }
        if(Q=="sort"){
            long long l,r; cin>>l>>r;
            sort(a.begin()+l-1, a.begin()+r);        }
        if(Q=="reverse"){
            long long l,r; cin>>l>>r;
            int t=0;
            for(long long i=l-1; i<(l+r)/2; i++){
                swap(a[i],a[r-1-t]);
                t++;
            }
        }
        if(Q=="print"){
            long long t; cin>>t;
            cout<<a[t-1]<<'\n';
        }
        if(Q=="push_back"){
            long long t; cin>>t;
            a.push_back(t);
        }
    }
}
