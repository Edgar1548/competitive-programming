#include <bits/stdc++.h>
using namespace std;
void solve(){
    string ternary, decoding = "", decodeMsg = "";
    cin >> ternary;
    unordered_map<string, char> alphabet;
    alphabet["."] = '0';
    alphabet["-."] = '1';
    alphabet["--"] = '2';
    int length = ternary.size();
    for (int i=0; i<length; i++){
        if (alphabet.find(decoding + ternary[i]) != alphabet.end()){
            decodeMsg += alphabet[decoding + ternary[i]];
            decoding = "";
        } else decoding += ternary[i];
    }
    cout << decodeMsg;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}