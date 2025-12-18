#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    if (!(n&1)) cout << __gcd(n/2, n);
    else cout << __gcd((n-1)/2, n-1);
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