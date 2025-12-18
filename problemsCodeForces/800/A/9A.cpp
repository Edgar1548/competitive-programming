#include <bits/stdc++.h>
using namespace std;
void solve(){
    int pointsYakko, pointsWakko;
    int dieRoll = 6;
    cin >> pointsYakko >> pointsWakko;
    int maxPoints = max(pointsYakko, pointsWakko);
    int dotProbability = dieRoll - maxPoints + 1;
    int gcd = __gcd(dotProbability, dieRoll);
    if (dotProbability % gcd == 0 && dieRoll % gcd == 0) {
        dotProbability /= gcd;
        dieRoll /= gcd;
        if (dotProbability == dieRoll) cout << "1/1";
        else cout << dotProbability << "/" << dieRoll;
    }
    else cout << dotProbability << "/" << 6;
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}