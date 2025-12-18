#include <bits/stdc++.h>
using namespace std;
unordered_map<char, bool> codeforceMap;
void solve(){
    int x, y, n;
    cin >> x >> y >> n;
    int closestDiv = n/x;
    while (closestDiv*x + y > n) closestDiv--;
    cout << closestDiv*x + y << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}