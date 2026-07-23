#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool asc = true;
        for(int i=1; i<n; i++){
            if(a[i]>=a[i-1]){
                continue;
            }else asc= false;
        }
        if(k==1 &&!asc){
            cout<<"NO"<<"\n";
        }else cout<<"YES"<<"\n";
    }
    
}