#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n,k  ;
        cin >> n >> k ;
        vector <int> num(n) ; 
        for(auto &value : num) cin >> value ;
        if(k == 1){
            // cout << "No" << endl;
            int flag = 0 ;
            for(int i = 1; i < n; i++){
                if(num[i] < num[i-1]){
                    cout << "No" << endl ;
                    flag = 1 ;
                    break ;
                }
            }
            if(flag != 1){
                cout << "Yes" << endl ;
            }
        }
        else{
            cout << "Yes" << endl ;
        }

    }
}