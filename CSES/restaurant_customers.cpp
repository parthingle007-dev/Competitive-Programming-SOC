#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int>> events(2*n);
    
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        events[2*i]   = {a, 1};    // arrival: +1
        events[2*i+1] = {b, -1};   // departure: -1
    }
    
    sort(events.begin(), events.end());
    
    int count = 0, max_count = 0;
    for(int i = 0; i < 2*n; i++){
        count += events[i].second;
        max_count = max(max_count, count);
    }
    
    cout << max_count;
}