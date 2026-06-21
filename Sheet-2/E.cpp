/*#include <iostream>
using namespace std;

int main(){
    long long N,Q; cin>>N>>Q;
    long long A[N];
    for(long long i=0; i<N; i++){
        cin>>A[i];
    }
    while(Q--){
        long long L,R; cin>>L>>R;
        long long sum = 0;
        for(long long i=L-1; i<R; i++){
            sum+=A[i];
        }
        cout<<sum<<'\n';
    }
}*/

#include <iostream>
using namespace std;

int main(){
    long long N,Q; cin>>N>>Q;
    long long A[N];
    for(long long i=0; i<N; i++){
        cin>>A[i];
    }
    long long B[N+1];
    B[0] = 0;
    B[1] = A[0];
    for(int i=2; i<N+1; i++){
        B[i] = B[i-1]+A[i-1];
    }
    while(Q--){
        long long L,R; cin>>L>>R;
        cout<<B[R]-B[L-1]<<endl;
    }
}