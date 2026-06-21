/*#include <iostream>
using namespace std;

int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    if(a*b>c*d && a>1 && c>1) cout<<"YES";
    else if(a==1 || c==1){
        if(a>c) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";
}
    */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * log(a) > d * log(c))
        cout << "YES";
    else
        cout << "NO";
}