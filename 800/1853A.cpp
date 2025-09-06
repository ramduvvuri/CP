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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = INT_MAX;
        int g = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[j - 1])
                break;
            g++;
        }
        if (g == n -)
        {
            for (int j = 1; j < n; j++)
            {
                ans = min(abs(arr[j] - arr[j - 1]), ans);
            }
            cout << ans / 2 + 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}