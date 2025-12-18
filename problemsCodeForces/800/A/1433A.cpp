#include <bits/stdc++.h>
using namespace std;
void solve(){
    string x;
    cin >> x;
    int number = x[0] - '0';
    int size_x = x.size();
    cout << 10 * (number - 1) + size_x*(size_x+1)/2 << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}