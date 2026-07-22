#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        long long n;
        cin >> n;
 
        long long a[n];
 
        for (long long i = 0; i < n; i++)
            cin >> a[i];
 
        long long pos = 0;
        long long neg = 0;
 
        for (long long i = 0; i < n; i++)
        {
            if (a[i] == 1)
                pos++;
            else
                neg++;
        }
 
        long long operations = 0;
 
        while (pos < neg || neg % 2 == 1)
        {
            operations++;
            pos++;
            neg--;
        }
 
        cout << operations << endl;
    }
 
    return 0;
}