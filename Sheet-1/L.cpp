#include <iostream>
using namespace std;

int main(){
     string a;
     getline(cin, a,' ');
     string b;
     getline(cin,b);
     
    string c;
     getline(cin, c,' ');
     string d;
     getline(cin,d);
     
     if(b==d) cout<<"ARE Brothers";
     else cout<<"NOT";
}

/*
#include <iostream>
using namespace std;

int main() {
    string f1, l1, f2, l2;

    cin >> f1 >> l1 >> f2 >> l2;

    cout << (l1 == l2 ? "ARE Brothers" : "NOT");
}
    */