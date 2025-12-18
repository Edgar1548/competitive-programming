#include <bits/stdc++.h>
using namespace std;
unordered_map<char, bool> codeforceMap;
void precompute(){
    string codeforce = "codeforces";
    int codeforceSize = codeforce.size();
    for (int i=0; i<codeforceSize; i++){
        codeforceMap[codeforce[i]] = true;
    }
}
void solve(){
    char c;
    cin >> c;
    if (codeforceMap.find(c) == codeforceMap.end()) cout << "NO";
    else cout << "YES";
    cout << "\n";   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    int t; cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}