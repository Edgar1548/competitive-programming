#include <bits/stdc++.h>
using namespace std;
void solve(){
    int rating;
    cin >> rating;
    if (rating <= 1399) cout << "Division 4";
    else if (1400 <= rating && rating <= 1599) cout << "Division 3";
    else if (1600 <= rating && rating <= 1899) cout << "Division 2";
    else cout << "Division 1";
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