#include <bits/stdc++.h>
using namespace std;
void solve(){
    unordered_map<char, bool> taskVerified;
    int n;
    string tasks;
    bool suspicious = false;
    cin >> n;
    cin >> tasks;
    for (int i=0; i<n-1; i++) {
        if (tasks[i] != tasks[i+1] && taskVerified.find(tasks[i+1]) != taskVerified.end()) suspicious = true;
        taskVerified[tasks[i]] = true;
    }
    if (suspicious) cout << "NO";
    else cout << "YES";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}