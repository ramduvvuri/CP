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
        vector<int> bit(n);
        int cntN = 0;
        int cntP = 0;
        for (auto &value : bit)
        {
            cin >> value;
            if (value == 1)
            {
                cntP++;
            }
            else
            {
                cntN++;
            }
        }
        int ans = 0;
        int diffn = cntN - cntP;
        if (diffn > 0)
        {
            if (diffn % 2 == 0)
                ans += diffn / 2, cntN -= diffn / 2;
            else
                ans += diffn / 2 + 1, cntN -= diffn / 2 + 1;
        }
        if (cntN % 2 != 0)
            ans++;

        cout << ans << endl;
    }
}