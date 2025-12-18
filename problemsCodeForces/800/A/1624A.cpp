#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, maxInArr = 0, minInArr = 0, number;
    cin >> n;
    cin >> minInArr;
    maxInArr = minInArr;
    for (int i=1; i<n; i++) {
        cin >> number;
        if (number > maxInArr) maxInArr = number;
        if (number < minInArr) minInArr = number;
    }
    cout << maxInArr - minInArr << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}