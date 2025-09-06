#include <bits/stdc++.h>

using namespace std ;

int main(){
    int n ;
    cin >> n;
    vector <int> arr(n) ;
    int ans = INT_MAX ;
    for(auto &value : arr){
        cin >> value ;
        if(value < 0){
            value = -value ;
        }
        ans = min(ans, value) ;
    }
    cout << ans << endl ;
}