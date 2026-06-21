/*
Exceeds time limit
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(A[i]>A[j]){
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}
*/

#include <iostream>
using namespace std;

int cnt[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    
    bool first = true;
    for (int i = 1; i <= 100000; i++) {
        while (cnt[i]--) {
            if (!first) cout << ' ';
            cout << i;
            first = false;
        }
    }
    cout << '\n';
    
    return 0;
}