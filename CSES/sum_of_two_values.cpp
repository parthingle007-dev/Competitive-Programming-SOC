#include <iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    long long n,k; cin>>n>>k;
    vector<long long> a(n);
    unordered_map<long long,long long>m;
    m.reserve(300000);
    for(long long i=0; i<n; i++){
        long long t; cin>>t;
        a[i] = t;
        m[t] = i;
    }
    long long x = 1;
    for(long long i=0; i<n; i++){
        if(m.find(k-a[i])!=m.end()){
            if(m[k-a[i]]!=i){
                cout<<i+1<<" "<<m[k-a[i]]+1;
                 x=0;
                 break;
            }
            
        }
    }
    if(x) cout<<"IMPOSSIBLE";
}

