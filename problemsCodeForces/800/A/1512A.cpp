#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int idx = 0;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];
    for (; idx<n-1; idx++) 
        if (arr[idx] != arr[idx+1] && ((idx < n-1 && arr[idx+1] == arr[idx+2]) || (idx > 0 && arr[idx+1] == arr[idx-1]))) break;
    cout << idx+1 << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}