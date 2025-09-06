#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        int cnt = 0 ;
        int ans = 0 ;
        int flag = 0 ;
        int flag2 = 0 ;
        for(int i = 0; i < n; i++){
            if(s[i] == '.'){
                cnt++ ;
            }
            else{
            if(cnt != 0){
                if(cnt > 2){
                    ans = 2 ;
                    flag2 = 1 ;
                    break ;
                }
                else{
                    ans += cnt ;
                }
                flag = 1 ;
                cnt = 0 ;
            }
            }
        }
        if(flag2 != 1){
            if(cnt > 2){
                ans = 2 ;
            }
            else{
                ans += cnt ;
            }
        }
        if(flag != 1){
            if(cnt > 2){
                cout << 2 << endl ;
            }
            else{
                cout << cnt << endl ;
            }
        }
        else{
            cout << ans << endl ;
        }

    }
}

