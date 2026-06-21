#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    long long n;
    cin>>n;
    unordered_map <long long, long long> m;
    long long pf = 0;
    long long count = 0;
    long long mod;
    for(int i=0; i<n; i++){
        long long a; cin>>a;
        pf+=a;
        if(pf<0 && pf%n!=0) mod = n-(abs(pf)%n);
        else mod = pf%n;
        if(mod==0){
            count++;
        }
        if(m.find(mod)!=m.end()){
            count+=m[mod];
        }
        m[mod]++;
    }
    cout<<count;
}