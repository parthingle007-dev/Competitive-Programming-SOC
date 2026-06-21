#include<iostream>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    if(a%b==0 || b%a==0){
        cout<<"Multiples";
    }else cout<<"No Multiples";
}

/* More optimal approach*/
/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << ((a % b == 0 || b % a == 0)
            ? "Multiples"
            : "No Multiples");
}*/