#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    int a = n + 5, b = n + 5;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] <= a && v[i] <= b) {
            if(a <= b) a = v[i];
            else b = v[i];
        } else if(v[i] <= a) {
            a = v[i];
        } else if(v[i] <= b) {
            b = v[i];
        } else {
            if(a < b) a = v[i];
            else b = v[i];
            ans++;
        }
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