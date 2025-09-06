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
        if (x == 1)
        {
            if (k == 1)
                cout << "No" << endl;
            else if (k == 2)
            {
                if (n % 2 == 0)
                {
                    // print seq
                    cout << "Yes" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                // print seq
                if (n % 2 == 0)
                {
                    // print seq
                    cout << "Yes" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++)
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2 - 1; i++)
                        cout << 2 << " ";
                    cout << 3;
                    cout << endl;
                }
            }
        }
        else
        {
            cout << "Yes" << endl;
            cout << n << endl;
            while (n--)
                cout << 1 << " ";
            cout << endl;
        }
    }
}