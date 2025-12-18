#include <bits/stdc++.h>
using namespace std;
bool isPair(int n) {
    return !(n & 1);
}
void solve(){
    int n, integer, pairs = 0, impairs = 0, incoincidens = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> integer;
        if (isPair(integer)) {
            pairs++;
            if (!isPair(i)) incoincidens++;
        } else if (isPair(i)) incoincidens++;
    }
    impairs = n - pairs;
    if ((isPair(n) && impairs != pairs) || (!isPair(n) && impairs + 1 != pairs)) cout << "-1"; 
    else  cout << incoincidens / 2;
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