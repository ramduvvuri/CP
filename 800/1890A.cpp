#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n; 
        vector <int> b(n) ;
        set <int> k ;
        for(auto &value : b) { 
            cin >> value ;
            k.insert(value) ;
        }
        if(k.size() > 2){
            cout << "No" << endl ;
        }
        else if(k.size() == 2){
            auto it = k.begin() ;
            int c1 = *(it);
            int cnt1 = 0 ;
            it++ ;
            int c2 = *(it) ;
            int cnt2 = 0 ;
            for(int i = 0; i < n; i++){
                if(b[i] == c1){
                    cnt1++ ;
                }
                else if (b[i] == c2){
                    cnt2++ ;
                }
            }

            if(n%2 == 0){
                if(cnt1 == cnt2){
                    cout << "Yes" << endl ;
                }
                else{
                    cout << "No" << endl ;
                }
            }
            else{
                int diffn = abs(cnt1-cnt2) ;
                if(diffn == 1){
                    cout << "Yes" << endl ;
                }
                else{
                    cout << "No" << endl ;
                }
            }
        }
        else{
            cout << "Yes" << endl ;
        }
        // set <int> k ;
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1 ; j < n; j++){
        //         k.insert(b[i]+b[j]) ;
        //     }
        // }
        // int check = 0 ;
        // for(auto it = k.begin() ; it != k.end(); it++){
        //     int sum = *(it) ;
        //     int cnt = 0 ;
        //     for(int i = 0; i < n-1; i++){
        //         for(int j = i+1; j< n; j++){
        //             int b2 = sum - b[i];
        //             if(b[j] == b2){
        //                 b[j] = b[i+1] ;
        //                 b[i+1] = b2 ;
        //                 cnt++ ;
        //                 break ;
        //             } 
        //         }
        //     }
        //     check = cnt ;
        //     if(cnt == n-1){
        //         cout << "Yes" << endl ;
        //     }
        // }

        // if(check < n-1){
        //     cout << "No" << endl ;
        // }

        // check for possible cases in the patern

       

    }
}