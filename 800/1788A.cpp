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
        vector<int> arr(n);
        int cnt = 0;
        for (auto &value : arr)
        {
            cin >> value;
            if (value == 2)
                cnt++;
        }
        if (cnt % 2 == 0)
        {
            int cnt2 = 0;
            int i = 0;
            for (; i < n; i++)
            {
                if (arr[i] == 2)
                {
                    cnt2++;
                    if (cnt / 2 == cnt2)
                    {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
            if (i == n)
            {
                cout << 1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}