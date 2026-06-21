#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
     string a; cin>>a;
     int q; cin>>q;
     vector<int> pf(a.size()+1,0);
     for(int i=1;i<=a.size(); i++){
        if(a[i-1]=='a'){
            pf[i] = pf[i-1]+1;
        }else pf[i] = pf[i-1];
     }
     while(q--){
        int l,r; cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
     }
}

/*more optimal/better*/
/*#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a; cin >> a;
    int n = a.size();

    vector<int> pf(n + 1, 0);
    for(int i = 1; i <= n; i++)
        pf[i] = pf[i-1] + (a[i-1] == 'a');

    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << pf[r] - pf[l-1] << '\n';
    }
}*/