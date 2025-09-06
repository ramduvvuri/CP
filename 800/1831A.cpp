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
        vector<int> num(n);
        for (auto &value : num)
            cin >> value;
        int d = n + 1;
        vector<int> num2(n);
        for (int i = 0; i < n; i++)
        {
            int diffn = d - num[i];
            num2[i] = diffn;
        }
        for (int i = 0; i < n; i++)
            cout << num2[i] << " ";
        cout << endl;
    }
}