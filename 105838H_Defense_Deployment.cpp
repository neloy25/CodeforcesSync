#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    ll res = 0;
 
    map<ll,ll> x,y;
    for(int i = 0; i < n; i++) {
        res+= x[a[i]];
        x[a[i]]++;
    }
 
    for(int j = 0; j < n; j++) {
        res+= y[b[j]];
        y[b[j]]++;
    }
    cout << res nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) solve();
}