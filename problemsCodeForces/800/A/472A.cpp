#include <bits/stdc++.h>
using namespace std;
unordered_map<int, bool> nonComposites;
void find_nonComposites(int top){
    for (int i = 2; i < sqrt(top)+1; i++){
        if (nonComposites.find(i) == nonComposites.end()) {
            nonComposites[i] = true;
            for (int j = 2; j < sqrt(top); j++){
                nonComposites[i*j] = false;        
            }
        }
    }
    nonComposites[1] = true;
}
void solve(){
    int n;
    cin >> n;
    int x, y;
    find_nonComposites(n);
    for (x=n-4; x >= 0; x--){
        y = n - x;
        if (nonComposites.find(x) != nonComposites.end() && nonComposites.find(y) != nonComposites.end() && !nonComposites[y] && !nonComposites[x]) break;
    }
    cout << x << " " << y;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}