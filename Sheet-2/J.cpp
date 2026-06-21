#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin>>N;
    vector<string> names; 
    vector<int> scores;
    vector<int> score;
    int x[N];
    for(int i=0; i<N; i++){
        x[i] = i;
    }
    while(N--){
        string name; cin>>name;
        names.push_back(name);
        int A,M,S,E; cin>>A>>M>>S>>E;
        score.push_back(A);
        score.push_back(M);
        score.push_back(S);
        score.push_back(E);
        scores.push_back(A+M+S+E);
    }
    for(int i=0; i<scores.size()-1; i++){
        for(int j=i+1; j<scores.size(); j++){
            if(scores[j]>scores[i]){
                swap(scores[i],scores[j]);
                swap(names[i],names[j]);
                swap(x[i],x[j]);
            }
            else if(scores[j]==scores[i]){
                if (names[i] > names[j]) {
                    string temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;
                    swap(x[i],x[j]);
                }
            }
        }
    }
    
    int u=0;
    for(int i=0; i<scores.size(); i++){
        cout<<names[i]<<" "<<scores[i]<<" ";
        for(int j=0;j<4; j++){
            cout<<score[4*x[u]+j]<<" ";
        }
        cout<<'\n';
        
        u++;
    }
}

/*LEARN STRUCT!!*/

/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int A, M, S, E, total;
};

int main(){
    int n; cin >> n;
    vector<Student> students(n);

    for(int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].A >> students[i].M >> students[i].S >> students[i].E;
        students[i].total = students[i].A + students[i].M + students[i].S + students[i].E;
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b){
        if(a.total != b.total) return a.total > b.total;
        return a.name < b.name;
    });

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].A << " " << students[i].M << " "
             << students[i].S << " " << students[i].E << '\n';
    }
}*/