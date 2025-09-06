#include <bits/stdc++.h>

using namespace std;
int cmp(int a, int b)
{
    return a > b;
}
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
        {
            cin >> value;
        }
        sort(arr.begin(), arr.end(), cmp);

        bool moreThanOne = false;
        // int index = 0 ;
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != arr[0])
            {
                moreThanOne = true;
                arr[0] = arr[i];
                arr[i] = temp;
                break;
            }
        }
        if (moreThanOne)
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}