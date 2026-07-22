#include<bits/stdc++.h>
using namespace std;
 
#define ll long double
#define nl << endl;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        ll a, b, s;
        cin >> a >> b >> s;
 
        ll u = a * a * s;
        ll v = b * b;
        ll div = u / v;
 
        cout << fixed << setprecision(7) << div << endl;
    }
}