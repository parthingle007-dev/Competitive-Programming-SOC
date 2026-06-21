#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long n,x; cin>>n>>x;
    vector<long long> w(n);
    for(long long i=0; i<n; i++){
        cin>>w[i];
    }
    sort(w.begin(),w.end());
    long long gondolas = 0;
    long long i=0; long long j = n-1;
    while(i<=j){
        if(w[i]+w[j]<=x){
            i++; j--;
        }else{
            j--;
        }
        gondolas++;
    }
    cout<<gondolas;
}