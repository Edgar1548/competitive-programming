#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, a, other, res = 0;
    cin >> a;
    for (int i=0; i<3; i++){
        cin >> other;
        if (other > a) res++; 
    }
    cout << res << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}