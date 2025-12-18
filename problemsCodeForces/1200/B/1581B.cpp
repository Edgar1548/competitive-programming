#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll maxArist = (n*(n-1))/2;
    if (k <= 1 || m > maxArist || m < n-1) cout << "NO";
    else if (n == 1){
        if (m == 0) cout << "YES";
        else cout << "NO";
    } else if (m == maxArist){
        if (k > 2) cout << "YES";
        else cout << "NO";
    } else if (m >= n-1){
        if (k > 3) cout << "YES";
        else cout << "NO";
    } 
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        solve();
    }
    return 0;
}      