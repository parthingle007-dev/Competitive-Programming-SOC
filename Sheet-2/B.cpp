#include<iostream>
#include <string>
#include<vector>
using namespace std;

int main(){
    string a; cin>>a;
    vector<int> c(58,0);
    for(char x: a){
        c[(x-'0'+48)-65]++;
    }
   for(int i=0; i<c.size(); i++){
    char t = 65+i;
    if(c[i]!=0){
    cout<<t<<" "<<c[i]<<endl;
    }
    
   }
}

/*Better suggested by chargpt
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[128] = {0};

    for(char c : s)
        freq[c]++;

    for(char c = 'A'; c <= 'Z'; c++)
        if(freq[c])
            cout << c << " " << freq[c] << '\n';

    for(char c = 'a'; c <= 'z'; c++)
        if(freq[c])
            cout << c << " " << freq[c] << '\n';
}*/