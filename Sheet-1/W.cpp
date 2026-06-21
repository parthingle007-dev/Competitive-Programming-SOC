#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    char x,y;
    cin>>a>>x>>b>>y>>c;
    if(x=='+'){
        if(a+b==c) cout<<"Yes";
        else cout<<a+b;
    }
    if(x=='-'){
        if(a-b==c) cout<<"Yes";
        else cout<<a-b;
    }
    if(x=='*'){
        if(a*b==c) cout<<"Yes";
        else cout<<a*b;
    }
}

/*Better version
#include <iostream>
using namespace std;

int main() {
    int a, b, c, result;
    char op, eq;

    cin >> a >> op >> b >> eq >> c;

    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else
        result = a * b;

    if(result == c)
        cout << "Yes";
    else
        cout << result;
}*/