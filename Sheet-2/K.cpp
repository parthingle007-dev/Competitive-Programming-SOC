#include <iostream>
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

struct Friend{
    string name;
    long long salary;
};

int main(){
    int N; cin>>N;
    int x=N;
    vector<Friend> friends;
    while(x--){
        Friend bro; cin>>bro.name; cin>>bro.salary;
        friends.push_back(bro);
    }
    sort(friends.begin(), friends.end(), [](const Friend& a, const Friend& b){
        if(a.salary != b.salary) return a.salary > b.salary;
        return a.name < b.name;
    });
    for(int i=0; i<N; i++){
        cout<<friends[i].name<<" "<<friends[i].salary<<'\n';
    }
}