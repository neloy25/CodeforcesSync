#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl << endl;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,x;
    cin >> n >> x;
    ll res = 0;
    while(true) {
        bool flag = true;
        for(int i = 2; i * i <= n;i++) {
            if(n % i == 0) {
                if(i > x) {
                    cout << "Que es Obo?\n";
                    return 0;
                }
                res++;
                n /= i;
                flag = false;
                break;
            }
        }
 
        if(flag) {
            if(n > x) {
                cout << "Que es Obo?\n";
                return 0;
            }
            res++;
            break;
        }
    }
    cout << res << endl;
}