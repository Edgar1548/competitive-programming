#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int arr[n], maxWelfare = 0, totalBurles = 0;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        totalBurles += arr[i];
        if (maxWelfare < arr[i]) maxWelfare = arr[i];
    }
    cout << maxWelfare * n - totalBurles << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}