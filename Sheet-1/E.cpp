#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double r; cin>>r;
    long double area = 3.141592653*r*r;
    cout << fixed << setprecision(9);
    cout<<area;
}