#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector <int> b(n) ;
        for(auto &value: b){
            cin >> value ;
        }
        int m = n ;
        for(int i = 1; i < n-1; i++){
            if(b[i] < b[i-1]){
                m++ ;
            }
        }
        cout << m << endl ;
        cout <<b[0] <<" " ;
        for(int i = 1; i < n-1; i++){
            if(b[i] < b[i-1]){
                cout << 1 << " ";
            }
            cout << b[i] << " " ;
        }
        if(n != 1){
            cout << b[n-1] << " " ;
        }

        cout << endl ;
    }
}
