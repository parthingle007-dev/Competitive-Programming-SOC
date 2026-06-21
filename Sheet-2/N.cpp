#include <iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int a = v[0].second;
    int b =v[0].first;
    for(int i=1; i<n; i++){
        if(v[i].first <= a) a= max(a, v[i].second);
        else{
            cout<<b<<" "<<a<<'\n';
            b = v[i].first;
            a=v[i].second;
        }
    }
    cout<<b<<" "<<a<<'\n';
}
