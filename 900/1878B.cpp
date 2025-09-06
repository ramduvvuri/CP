#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        multiset<int> S;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += i;
            S.insert(sum);
        }

        auto it = S.find(x);

        if (it != S.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}