#include<iostream>
using namespace std;

int main(){
    int a,c;
    char b;
    cin>>a>>b>>c;
    if(b=='>'){
        if(a>c) cout<<"Right";
        else cout<<"Wrong";
    }
    if(b=='<'){
        if(a<c) cout<<"Right";
        else cout<<"Wrong";
    }
    if(b=='='){
        if(a==c) cout<<"Right";
        else cout<<"Wrong";
    }
}

/*#include <iostream>
using namespace std;

int main() {
    int a, c;
    char op;

    cin >> a >> op >> c;

    if ((op == '>' && a > c) ||
        (op == '<' && a < c) ||
        (op == '=' && a == c))
        cout << "Right";
    else
        cout << "Wrong";
}*/