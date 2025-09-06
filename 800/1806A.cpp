#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b)
        {
            cout << -1 << endl;
        }
        else if (d == b)
        {
            if (c > a)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << a - c << endl;
            }
        }
        else
        {
            long long t0 = d - b;
            if (c <= a + t0)
            {
                cout << a - c + 2 * t0 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}