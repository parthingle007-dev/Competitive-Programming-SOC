#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int max = a[0]-0;
        for(int i=1; i<n; i++){
            if(max<a[i]-a[i-1]) max = a[i]-a[i-1];
        }
        if(2*(x-a[n-1])>max) max =2*(x-a[n-1]);
        cout<<max<<"\n";
    }
}