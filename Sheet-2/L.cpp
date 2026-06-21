#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,k; cin>>n>>k;
    vector<int>  students_rating(n,0);
    vector<int> freq(101,0);
    for(int i=0; i<n; i++){
        cin>>students_rating[i];
        freq[students_rating[i]]++;
    }
    vector<int> indices(k,0);
    int t = 0;
    for(int i=0; i<n; i++){
        if(freq[students_rating[i]]!=0){
            indices[t] = i+1;
            freq[students_rating[i]] = 0;
            t++;
            if(t==k) break;
        }
    }
    bool yn = false;
    for(int i=0; i<k; i++){
        if(indices[i]==0){
            cout<<"NO";
            yn = true;
            break;
        }
    }
    if(!yn){
        cout<<"YES"<<'\n';
        for(int i=0; i<indices.size(); i++){
        cout<<indices[i]<<"  ";
    }
    }
    
}

/*go one byone through all students if freq!=0 of that element add that index and then make its freq to 0*/


/*#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<bool> seen(101, false);
    vector<int> team;

    for(int i = 0; i < n && (int)team.size() < k; i++){
        if(!seen[a[i]]){
            seen[a[i]] = true;
            team.push_back(i + 1);
        }
    }

    if((int)team.size() < k){
        cout << "NO";
    } else {
        cout << "YES\n";
        for(int idx : team) cout << idx << " ";
    }
}*/

/*Key differences from yours:

seen[] bool array instead of freq[] — you only need to know if a rating was picked, not how many times it appears
Loop condition i < n && team.size() < k — stops early naturally, no explicit break needed
team.size() < k for YES/NO check — cleaner than checking for zeros in indices
Range-based for loop for output — more idiomatic C++*/