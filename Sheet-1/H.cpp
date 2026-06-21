#include <iostream>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    int floor = a/b;
    int ceil;
    int round;
    if(a==b) ceil = floor;
    else ceil=floor+1;
    if((double)(a%b)/b >=0.5) round = floor+1;
    else if ((double)(a%b)/b < 0.5) round = floor;

    cout<<"floor "<<a<<" / "<<b<< " = "<<floor<< '\n'<<
    "ceil "<<a<<" / "<<b<< " = "<<ceil<<'\n'
    <<"round "<<a<<" / "<<b<<" = "<<round;
}

/*Most optimal approach*/
/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int q = a / b;
    int rem = a % b;

    cout << "floor " << a << " / " << b << " = " << q << '\n'
         << "ceil " << a << " / " << b << " = "
         << (rem ? q + 1 : q) << '\n'
         << "round " << a << " / " << b << " = "
         << (2 * rem >= b ? q + 1 : q);
         rem/b​≥0.5 i.e. 2*rem >= b
}*/