#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    long long n,d; cin>>n>>d;
    vector<pair<long long ,long long>> a(n);
    for(long long i=0; i<n; i++){
        cin>>a[i].first>>a[i].second; //first = money //second= friendship
    }
    sort(a.begin(),a.end());
    int l=0;
    int r = 0;
    long long m =0;
    long long curr = 0;
    while(l<=r &&r<n &&l<n){
        if(a[r].first-a[l].first <d){
            curr+=a[r].second;
            r++;
        }else{
            curr-=a[l].second;
            l++;
        }
        m = max(m,curr);
    }
    cout<<m;
}