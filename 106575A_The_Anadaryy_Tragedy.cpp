#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    string tmp = "Anadry";
    vector<int> feq(128,0);
    for(char ch : s) {
        feq[ch - '0']++;
    }
    int res = n;
    for(char ch : tmp) {
        if(ch == 'a' || ch == 'y') {
            res = min(res, feq[ch - '0'] / 2);
        }
        else res = min(res, feq[ch - '0']);
    }
    cout << res << endl;
}