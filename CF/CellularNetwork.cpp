#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    vector<int> city(n);
    vector<int> tower(m);
    for(int i=0; i<n; i++){
        cin>>city[i];
    }
    for(int i=0; i<m; i++){
        cin>>tower[i];
    }
    int t =0;
    int diff = 0;
    int MAX = 0;
    for(int i=0; i<n; i++){
        if(t!=m-1){
            if(abs(city[i]-tower[t])>=abs(city[i]-tower[t+1])){
                t++;
            }
        }
        diff = abs(city[i]-tower[t]);
        MAX = max(MAX,diff);
    }
    cout<<MAX;
}