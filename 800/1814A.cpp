#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        int d = gcd(2, k);
        int rem = n % d;
        if (!rem)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}