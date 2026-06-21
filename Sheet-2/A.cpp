#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q; cin>>n>>q;
    vector<int> a(n,0);
    vector<int> b;
    while(q){
        int z,x; cin>>z>>x;
        if(z==1){
            a[x-1]++;
        }
        else{
            b.push_back(a[x-1]);
        }
        q--;
    }
    for(int i=0; i<b.size(); i++){
        cout<<b[i]<<endl;
    }
}