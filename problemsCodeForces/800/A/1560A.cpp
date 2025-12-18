#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> kth_sequence;
void preCompute(){
    int x=1;
    for (int i=1; i<=1000; i++){
        while (x % 3 == 0 || x % 10 == 3) x++;
        kth_sequence[i] = x;
        x++;
    }   
}
void solve(){
    int n;
    cin >> n;
    cout << kth_sequence[n] << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    preCompute();
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}