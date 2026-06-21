#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m,k; cin>>n>>m>>k;
    int count =0;
    vector<int>p(n);
    vector<int>a(m);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    sort(p.begin(), p.end()); 
    sort(a.begin(), a.end()); 
    int i =0; //for p
    int j = 0;//for a
    while(i<n && j<m){
        if(a[j]-k<=p[i] && a[j]+k>=p[i]){
            count++;
            i++;
            j++;
        }else if(p[i]>a[j]+k) j++;
        else if(p[i]<a[j]-k) i++;
    }
    cout<<count;
}