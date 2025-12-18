#include <bits/stdc++.h>
using namespace std;
void solve(){
    int results[2];
    string str;
    cin >> str;
    for (int i=0; i<2; i++){
        results[i] = 0;
        for (int j=i*3; j<(i+1)*3; j++){
            results[i] += str[j] - '0';
        }
    }
    if (results[0] == results[1]) cout << "YES\n";
    else cout << "NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}