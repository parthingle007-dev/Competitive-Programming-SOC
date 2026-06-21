#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){                         //prefix[j] - prefix[i] = k; hence prefix[i] = k - prefix[j]
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> prefix(n);
    prefix[0] = a[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1]+a[i];
    }
    unordered_map<int,int> m;
    int l = 0;
    for(int i=0; i<n; i++){
        if(prefix[i]==k){
            l = max(l,i+1);
        }
        if(m.find(prefix[i]-k)!=m.end()){
            l = max(i-m[prefix[i]-k],l);
        } 
        m[prefix[i]] = i;
    }

    cout<<l;
}