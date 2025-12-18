#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a_1, a_2, a_3, a_4, s_size, totalCalories = 0;
    string s;
    cin >> a_1 >> a_2 >> a_3 >> a_4;
    cin >> s;
    s_size = s.size();
    for (int i=0; i < s_size; i++){
        switch (s[i]){
            case '1':
                totalCalories += a_1;
                break;
            case '2':
                totalCalories += a_2;
                break;
            case '3':
                totalCalories += a_3;
                break;
            default:
                totalCalories += a_4;
                break;
        }
    }
    cout << totalCalories << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}