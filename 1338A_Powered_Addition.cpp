#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
ll msb(int n) {
    ll k = 0;
    while(n != 0) {
        n >>= 1;
        k++;
    }
    return k;
}
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    ll ans = 0;
    ll mx = LLONG_MIN;
    for(int i = 0; i < n; i++) {
        mx = max(mx, v[i]);
        ll diff = mx - v[i];
        ans = max(ans, msb(diff));
    }
    cout << ans nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) solve();
}