#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    set<ll> s;
    for(int i = 1; i <= n; i++) {
        s.insert(i);
    }
 
    for(auto val : v) {
        if(s.count(val)) s.erase(val);
    }
    if(s.empty()) cout << -1 nl;
    else cout << *s.begin() nl;
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) solve();
}