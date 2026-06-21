#include <iostream>
using namespace std;

int main(){
    char a; cin>>a;
    if(a>=65 && a<97){
        a+=32;
    }else if(a>=97){
        a-=32;
    }
    cout<<a;
}

/* Optimal approach
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char a;
    cin >> a;

    if(isupper(a))
        cout << (char)tolower(a);
    else
        cout << (char)toupper(a);
}
        */