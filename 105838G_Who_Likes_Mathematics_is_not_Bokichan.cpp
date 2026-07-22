#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
ll l,r,res;
void rec(int last, int k, ll num) {
    // cout << num << endl;
    if(num > r) return;
    if(num >= l && num <= r) res++;
    if(k >= 18) return;
    if(last != 9) {
        rec(last + 1, k + 1, num * 10 + last + 1);
    }
    if(last != 0) {
        rec(last - 1, k + 1, num * 10 + last - 1);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> l >> r;
    res = 0;
    for(int i = 1; i <= 9; i++) {
        rec(i, 1, i);
    }
    cout << res nl;
}