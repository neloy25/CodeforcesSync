#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> v(n);
    iota(v.begin(), v.end(),n + 1);
    for(int val : v) {
        cout << val << " ";
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) solve();
}