#include <iostream>
using namespace std;
 
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>=c && b<=d && a<=c && a<=d){
        cout<<c<<' '<<b;
    }else if(b>=c && b>=d && a<=c && a<=d){
        cout<<c<<' '<<d;
    }else if(b>=c && b<=d && a>=c && a<=d){
        cout<<a<<" "<<b;
    }else if(b>=c && b>=d && a>=c && a<=d){
        cout<<a<<" "<<d;
    }
    else cout<<"-1";
}

/*Important!!!
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int l = max(a, c);
    int r = min(b, d);

    if (l <= r)
        cout << l << " " << r;
    else
        cout << -1;

    return 0;
}
    */