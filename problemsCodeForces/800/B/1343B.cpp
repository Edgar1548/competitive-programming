#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, sumPair = 0, sumImpair = 0;
    cin >> n;
    if (!(n/2 & 1)){
        cout << "YES\n";
        for (int i=0; i<n/2; i++){
            sumPair += (i+1)*2;
            cout << (i+1)*2 << " ";
        }
        for (int i=0; i<n/2-1; i++){
            sumImpair += (i*2+1);
            cout << i*2+1 << " ";
        }
        cout << sumPair - sumImpair << "\n";
    } else cout << "NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}