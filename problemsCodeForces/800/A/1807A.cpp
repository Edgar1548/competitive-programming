#include <bits/stdc++.h>
using namespace std;
unordered_map<char, bool> codeforceMap;
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c) cout << "+";
    else cout << "-";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}