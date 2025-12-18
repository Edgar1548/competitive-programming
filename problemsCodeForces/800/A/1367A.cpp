#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str, decoded = "";
    cin >> str;
    int length = str.size();
    for (int i=0; i<length; i+=2){
        decoded += str[i];
    }
    decoded += str[length-1];
    cout << decoded << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i=0; i<t; i++) solve();
    return 0;
}