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
        string binary;
        cin >> binary;
        int l = 0;
        int r = n - 1;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (binary[l] == binary[r])
            {
                flag = 1;
                cout << r - l + 1 << endl;
                break;
            }
            else
            {
                l++, r--;
            }
        }
        if (flag == 0)
        {
            cout << 0 << endl;
        }
    }
}