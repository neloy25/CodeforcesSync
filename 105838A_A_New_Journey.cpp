#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl
 
void solve() {
    ll n, m ,k;
    cin >> n >> m >> k;
 
    vector<ll> b(m), r(m),x(n), y(n);
    vector<vector<ll>> p(m, vector<ll> (n));
    vector<priority_queue<int>> score(n);
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
 
    for(int i = 0; i < m; i++) {
        cin >> r[i];
    }
 
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> p[i][j];
        }
    }
 
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
 
    for(int i = 0; i < n; i++) {
        cin >> y[i];
    }
 
    for(int i = 0; i < m; i++) {
        ll pmax = 0;
        for(int j = 0; j < n; j++) {
            if(p[i][j] != -1) pmax = max(pmax, p[i][j]);
        }
 
        if(pmax == 0) {
            for(int j = 0; j < n; j++) {
                if(p[i][j] != -1) {
                    score[j].push(b[i]);
                    // cout << b[i] << " ";
                }
            }
        } else {
            for(int j = 0; j < n; j++) {
                if(p[i][j] != -1) {
                    score[j].push(min(100LL,b[i] + (r[i] * p[i][j]) / pmax));
                    // cout << min(100LL,b[i] + (r[i] * p[i][j]) / pmax) << " ";
                }
            }
        }
    }
 
    vector<ll> res1(n), res2(n);
    for(int i = 0; i < n; i++) {
        ll res = 0;
        for(int j = 0; j < k && !score[i].empty(); j++) {
            res += score[i].top();
            score[i].pop();
        }
        res1[i] = res / k;
    }
 
    for(int i = 0; i < n; i++) {
        res2[i] = min(100LL,x[i] / 60 + y[i]);
    }
 
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        if((res1[i] >= 50 && res2[i] >= 50) && (res1[i] >= 60 || res2[i] >= 60)) {
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