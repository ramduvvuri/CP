// #include <bits/stdc++.h>
// using namespace std ;

// int main(){
//     int t ;
//     cin >> t ;
//     while(t--){
//         long long n,k,q;
//         cin >> n >> k >> q ;
//         vector <long long> arr(n) ;
//         vector <long long> gDays(n) ;
//         for(auto &val : arr) cin >> val ;
//         int i = 0 ;
//         int cumSum = 0 ;
//         for(auto val : arr){
//             if(val <= q) cumSum++ ;
//             gDays[i] =  cumSum ;
//             i++;
//         }
//         int step = k ;
//         long long days = 0 ;
//         while(step <= n){
//             // For one particular step
//             for(int i = 0; i < n; i++){
//                 if(i+step-1 < n){
//                     if(i == 0){
//                         if(gDays[i+step-1] == step) days++ ;
//                     }
//                     else{
//                         if(gDays[i+step-1] - gDays[i-1] == step) days++ ;
//                     }
//                 }
//             }
//             step++ ;
//         }

//         cout << days << endl ;
//     }
// }

// Second apporach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> arr(n);
        for (auto &val : arr)
            cin >> val;

        long long days = 0;
        int l = 0;
        int r = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > q)
            {
                if ((r - l + 1) >= k)
                    days += (((r - l + 1) - k + 1) * ((r - l + 1) - k + 2)) / 2;
                l = i;
                r = i - 1;
            }
            else
                r++;
        }
        if ((r - l + 1) >= k){
            if ((r - l + 1) >= k) days += (((r - l + 1) - k + 1) * ((r - l + 1) - k + 2)) / 2;
        }
        cout << days << endl;
    }
}
