#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector <int> arr(n) ;
        bool ones = true ;
        for(auto &value : arr){
            cin >> value ;
            if(value != 1){
                ones = false ;
            }
        }
        int l1 = 0 ;
        int l2 = 0 ;
        vector <int> L1 ;
        vector <int> L2 ;
        for(int i = 0 ; i < n ; i++){
            int cnt =  0;
            for(int j = 0 ; j < n ; j++){
                if(i == j) continue;
                else {
                    if(arr[i] % arr[j] != 0){
                        cnt++ ;
                    }
                }
            }
            if(cnt == n-1){
                L1.push_back(arr[i]) ;
                l1++ ;
            }
            else{
                L2.push_back(arr[i]) ;
                l2++ ;
            }
        }
        if(l1*l2 >= 1){
            cout << l1 << " "<< l2 << endl ;
            for(int i = 0; i < L1.size();i++) cout << L1[i] <<" " ;
            cout << endl ;
            for(int i = 0; i < L2.size();i++) cout << L2[i] ;
            cout << endl ;
        }
        else{
            cout << -1 << endl ;
        }
    }
}