#include<iostream>
#include<string>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        string x,s; cin>>x>>s;
        int c=0;
        while(n<m){
            n*=2;
            x=x+x;
            c++;
        }
        int i = 2;
        int a=0;
        while(i--){
            if(x.find(s)!=string::npos){
                cout<<c<<"\n";
                a=1;
                break;
            }else{
                x=x+x;
                c++;
            }
        }
        if(!a) cout<<-1<<"\n";
    }
}