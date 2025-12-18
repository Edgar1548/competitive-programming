#include <bits/stdc++.h>
using namespace std;
struct Student{
    int number;
    int position;
};
unordered_map<int, vector<Student>> studentMap;
void solve(){
    int n, pos = 0, minCounter;
    cin >> n;
    Student studentArr[n] ;
    for (int i=1; i<n+1; i++) {
        cin >> studentArr[i].number;
        studentArr[i].position = i;
        studentMap[studentArr[i].number].push_back(studentArr[i]);
    }   
    minCounter = min(studentMap[1].size(), min(studentMap[2].size(), studentMap[3].size()));
    cout << minCounter << "\n";
    while (pos < minCounter){
        cout << studentMap[1][pos].position << " " << studentMap[2][pos].position << " " << studentMap[3][pos].position << "\n";
        pos++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}