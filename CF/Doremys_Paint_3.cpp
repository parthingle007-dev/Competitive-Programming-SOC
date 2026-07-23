#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map <int,int> m;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            m[x]++;
        }
        int c = 0;
        if(m.size()==1){
            cout<<"YES"<<"\n";
            continue;
        }
        if(m.size()==2){
            for(auto& p: m){
                if(n%2!=0){
                    if(p.second==n/2 || p.second==n/2+1){
                        c=1;
                        break;
                }
                }else{
                    if(p.second==n/2){
                        c=1;
                        break;
                    }
                }
                
            }
            if(c) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }else cout<<"NO"<<"\n";
    }
}