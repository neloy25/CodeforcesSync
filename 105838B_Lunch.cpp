#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int a[3];
    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }
 
    sort(a, a + 3);
 
    if(a[0] == a[1]) {
        cout << -1 nl;
    } else {
        cout << a[2] << " " << a[0] << " " << a[1] nl;
    }
}