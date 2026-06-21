#include <iostream>
using namespace std;

int main(){
    int a[3];
    int b[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
        b[i] = a[i];
    }

    for(int i=0;i<2; i++){
        for(int j=i+1; j<3; j++){
            if(a[j]<a[i]){
                int t = a[j];
                a[j] =a[i];
                a[i] = t;
            }
        }
    }
    for(int i=0; i<3; i++){
        cout<<a[i]<<'\n';
    }
    cout<<'\n';
    for(int i=0; i<3; i++){
        cout<<b[i]<<'\n';
    }
}

/* Most optimal for small array*/
/*#include <iostream>
using namespace std;

int main() {
    int a[3], b[3];

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    if(a[0] > a[1]) swap(a[0], a[1]);
    if(a[1] > a[2]) swap(a[1], a[2]);
    if(a[0] > a[1]) swap(a[0], a[1]);

    for(int i = 0; i < 3; i++)
        cout << a[i] << '\n';

    cout << '\n';

    for(int i = 0; i < 3; i++)
        cout << b[i] << '\n';
}
        */
/* use vector and sort function for larger arrays*/
       