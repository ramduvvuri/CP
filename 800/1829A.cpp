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
        for (auto &value : arr)
            cin >> value;
        int l = 0;
        int r = 0;
        int maxDiffn = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                if (i < n - 1)
                {
                    maxDiffn = max(r - l, maxDiffn);
                    l = i + 1;
                    r = i + 1;
                }
            }
            else
            {
                r++;
            }
        }
    }
}