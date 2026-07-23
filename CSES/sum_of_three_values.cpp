#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int>b;
    unordered_map<int,int> m;
    m.reserve(300000);
    int y=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(m.find(k-a[i]-a[j])!=m.end()){
                b.push_back(i+1);
                b.push_back(m[k-a[i]-a[j]]+1);
                b.push_back(j+1);
                y=1;
                break;
            }else{
                m[a[j]] = j;
            }
        }
        if(y) break;
    }
    if(b.size()<3){
        cout<<"IMPOSSIBLE";
    }else{
        for(int i=0; i<3; i++){
            cout<<b[i]<<" ";
        }
    }
}

//in the above code the map is never cleared when i changes so it may have duplicates and give wrong answers even tho it got accepted in cses

// the below is approach than above using maps
/*for (int i = 0; i < n; i++) {
    unordered_map<int,int> mp;

    for (int j = i + 1; j < n; j++) {

        int need = k - a[i] - a[j];

        if (mp.count(need)) {
            cout << i + 1 << " "
                 << mp[need] + 1 << " "
                 << j + 1;
            return 0;
        }

        mp[a[j]] = j;
    }
}

cout << "IMPOSSIBLE";*/

//another method using sort + 2 pointers
/* fix a number i then find the other two by 2 pointer method
    if sum of l and r is greater than k-i then l++ else r--
*/