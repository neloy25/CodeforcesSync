#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
void solve() {
    string s;
    cin >> s;
 
    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] < s[i + 1]) {
            swap(s[i], s[i + 1]);
            break;
        }
    }
    cout << s nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) solve();
}