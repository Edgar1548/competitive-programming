#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, maxTeams = 0;
    cin >> n >> k; 
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for (int i=2; i<n; i+=3) maxTeams += (5 - arr[i] >= k) ? 1 : 0;
    cout << maxTeams;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}