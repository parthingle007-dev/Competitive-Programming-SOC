#include <iostream>
using namespace std;

int main(){
    long long a,b,c,d; cin>>a>>b>>c>>d;
    string x = to_string((a%100)*(b%100)*(c%100)*(d%100));
    if(x.size()>=2){
    cout<<x.substr(x.size() - 2, 2);
    }else cout<<"00";
}
/*Optimal code
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

    cout << setw(2) << setfill('0') << ans;
}
*/