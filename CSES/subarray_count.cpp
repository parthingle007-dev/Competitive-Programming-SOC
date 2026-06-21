#include <iostream>
#include <vector>
#include<algorithm>
#include <unordered_map>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k; cin>>n>>k;
    vector<long long> a(n+1,0);
    long long pf=0;
     unordered_map<long long, long long> m;
    m.reserve(300000);
    m[0]=1;
    long long count = 0;
    for(long long i=1; i<n+1; i++){
        cin>>a[i];
        pf+=a[i];
        if(m.find(pf-k)!= m.end()){
            count+=m[pf-k];
        }
        m[pf] ++; 
    }
        cout<<count;
    }
   
