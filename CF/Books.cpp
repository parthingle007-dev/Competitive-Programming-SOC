#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int> pf(n+1,0);
    for(int i=1; i<n+1; i++){
        pf[i] = pf[i-1]+a[i-1];
    }
    int len = 0;
    int j = 0;
    for(int i=0; i<n+1; i++){
        while(j<n+1 && pf[j]-pf[i]<=k){
            j++;
        }
        len = max(len,j-i-1);
    }
    cout<<len;
}

//Better approach

/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    long long sum = 0;
    int len = 0;

    for (int r = 0; r < n; r++) {
        sum += a[r];

        while (sum > k) {
            sum -= a[l];
            l++;
        }

        len = max(len, r - l + 1);
    }

    cout << len;
}*/