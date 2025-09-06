#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
       string s,x ;
       int m, n ;
       cin >> n >> m ;
       cin >> x ;
       cin >> s ; 
       int inc = n ;
       int cnt = 0 ;
        while(m < inc) {
            inc += inc ;
            cnt++ ;
        }
        int temp = ++cnt;
        while(temp--) x += x; 
       inc  += inc ;
       int c =  0 ;
       int flag = 0 ;
       for(int i = 0 ; i < inc - (m) ; i++){
            int l = i ;
            int r = i + m -1 ;
            string check = x.substr(l,m) ;
            if(s == check){
                flag = 1 ;
                break ;
            }
            
            c = r ; 
       }
       if(flag == 1){
            if(c < inc - inc/2){
                cout << cnt-1 << endl ;
            }
            else{
                cout << cnt << endl ;
            }
       }
       else{
        cout << -1 << endl ;
       }
    }
}