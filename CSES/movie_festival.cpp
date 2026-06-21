#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(), v.end());
    int e = 0;
    int c=0;
    for(int i=0; i< n; i++){
        if(v[i].second>=e){
            e=v[i].first;
            c++;
        }
    }
    cout<<c;
}