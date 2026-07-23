#include<iostream>
#include<vector>
using namespace std;

/*bool gcd(int x, int y){
    while (y) {
        x %= y;
        swap(x, y);
    }
    return x==1? true: false;
}

int main(){
    int n,m; cin>>n>>m;
    vector<int> a(n);
    vector<int>b;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool f = true;
    for(int i=1;i<=m; i++){
        for(int j=0; j<n; j++){
            if(!gcd(i,a[j])){
                f = false;
                break;
            }
            
        }
        if(f){
            b.push_back(i);
        }
        f = true;
    }
    cout<<b.size()<<"\n";
    for(int x:b){
        cout<<x<<"\n";
    }
}*/

int main(){
    int n,m; cin>>n>>m;
    int MAX = 100000;
    vector<bool> badPrimes(MAX+1,false);
    vector<bool> bad(m+1, false);
    for(int i=0; i<n; i++){
        int x; cin>>x;
        for(int p=2; p*p<=x; p++){
            if(x%p==0){
                badPrimes[p] = true;
                while(x%p==0) x/=p;
            }
        }
        if(x>1) badPrimes[x]=true;
    }
    vector<int>ans;
    for(int i =2; i<badPrimes.size(); i++){
        if(badPrimes[i]){
            for(int p =i; p<=m; p+=i){
                bad[p] = true;
            }
        }
    }
    for(int i = 1; i <= m; i++){
    if(!bad[i])
        ans.push_back(i);
}

    cout<<ans.size()<<"\n";
    for(int i=1; i<=m; i++){
        if(!bad[i]) cout<<i<<"\n";
    }
}