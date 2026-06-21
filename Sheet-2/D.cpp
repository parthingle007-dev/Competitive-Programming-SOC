/*#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m ; cin>>n>>m;
    vector<int> a(2*m,0);
    for(int i=0; i<2*m; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int t = -1*m;
    vector<int> b(2*m,0);
    for(int i=0; i<2*m; i++){
        b[i] = t;
        t++;
    }
    for(int i=0; i<2*m ; i++){
        if(a[i]!=b[i]){
            cout<<b[i];
            break;
        }
    }
}*/
//important!!
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> present(2 * m + 1, false);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        present[x + m] = true;
    }

    for(int x = -m; x <= m; x++) {
        if(!present[x + m]) {
            cout << x;
            break;
        }
    }
}