#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , k ;
        cin >> n >>  k;
        string s ;
        cin >> s ;
        map <char, int> M ;
        for(auto &value : s) M[value]++ ;
        int count = 0 ;
        int uni = 0 ;
        for(auto it = M.begin() ; it != M.end(); it++){
            auto charc = it -> first ;
            auto occ = it ->  second ;
            if(occ >= 2){
                count += occ/2 ;
            }
            uni++ ;
        }

        if(count >= (n-k)/2){
            cout << "Yes" << endl ;
        }
        else {
            cout << "No" << endl ;
        }
    }
}