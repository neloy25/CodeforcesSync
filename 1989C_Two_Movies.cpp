#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
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
 
    int f= 0, l = 0, neg = 0, pos = 0;
 
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            if(a[i] > 0) pos++;
            else if(a[i] < 0) neg++;
        }
        else {
            if(a[i] > b[i]) f+= a[i];
            else l+= b[i];
        }
    }
 
    // cout << f << " " << l << " " << neg << " " << pos nl;
 
    // to make 1
    
 
    for(int i = n; i >= -n; i--) {
        int neg1 = neg, pos1 = pos;
        int need = max(0, i - f) + max(0, i - l);
        int consume = max(0, f - i) + max(0, l - i);
        neg1 = max(0, neg1- consume); pos1 = pos1 - need;
        if(pos1 >= neg1) {
            cout << i nl;
            return;
        }
    }
    
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) solve();
}