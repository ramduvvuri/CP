#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &value : a)
            cin >> value;
        sort(a.begin(), a.end());
        // int Gcd = gcd(arr[0], arr[1]);
        // int flag = 1;
        // for (int i = 1; i < n; i++)
        // {
        //     if (Gcd <= i + 1)
        //     {
        //         Gcd = gcd(Gcd, arr[i + 1]);
        //     }
        //     else
        //     {
        //         flag = -1;
        //         break;
        //     }
        // }
        // if (flag == -1)
        // {
        //     cout << "No" << endl;
        // }
        // else
        // {
        //     cout << "Yes" << endl;
        // }
        int g = a[0];
        bool beautiful = true;

        for (int i = 1; i < n; ++i)
        {
            g = gcd(g, a[i]);
            if (g > i + 1)
            {
                beautiful = false;
                break;
            }
        }

        cout << (beautiful ? "Yes" : "No") << '\n';
    }
}