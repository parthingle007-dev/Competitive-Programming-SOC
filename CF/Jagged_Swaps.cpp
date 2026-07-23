#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int min = a[0];
        int found = 0;
        for(int i=1;i<n; i++){
            if(a[i]<min){
                found = 1;
                break;
            }
        }
        if(found) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}