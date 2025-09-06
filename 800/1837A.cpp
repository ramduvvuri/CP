#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        int rem = x % k;
        if (rem == 0)
        {
            cout << 2 << endl;
            cout << x - 1 << " " << x << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
}