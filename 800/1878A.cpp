#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n, k ;
        cin >> n >> k ;
        vector <int> arr(n) ;
        int flag = 0 ;
        for(auto &value : arr) {
            cin >> value ;
        }
        int check = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(k == arr[i]){
                cout << "Yes" << endl ;
                check = 1 ;
                break ;
            }
            
        }
        if(check == 0){
            cout << "No" << endl ;
        }
    }
}