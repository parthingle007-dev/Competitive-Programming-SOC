/*#include<iostream>
using namespace std;

int main(){
    int n,m,q; cin>>n>>m>>q;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    while(q--){
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        int sum = 0;
        for(int i=x1-1; i<x2; i++){
            for(int j=y1-1; j<y2; j++){
                sum+=a[i][j];
            }
        }
        cout<<sum<<" ";
    }
    
}*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n,m,q; cin>>n>>m>>q;
    long long a[n][m];
    for(long long i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    
    long long prefix[n+1][m+1];
    for(int i = 0; i <= n; i++)
    prefix[i][0] = 0;

    for(int j = 0; j <= m; j++)
        prefix[0][j] = 0;
    for(int i=1;i<=n; i++){
        for(int j=1; j<=m; j++){
           // Very very very Important!!

           prefix[i][j] = prefix[i-1][j]+ prefix[i][j-1] - prefix[i-1][j-1] + a[i-1][j-1];
        }
    }


    while(q--){
        long long x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        cout<<prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1]<<'\n';
    }
}

