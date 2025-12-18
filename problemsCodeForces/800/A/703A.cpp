#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, a , b;
    cin >> n;
    int counterWinsMishka = 0, counterWinsChris = 0;
    for (int i=0; i<n; i++){
        cin >> a >> b;
        if (a < b) counterWinsChris++;
        else if (b < a) counterWinsMishka++;
    };
    if (counterWinsChris < counterWinsMishka) cout << "Mishka";
    else if (counterWinsMishka < counterWinsChris) cout << "Chris";
    else cout << "Friendship is magic!^^";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}