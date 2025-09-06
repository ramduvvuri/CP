#include <bits/stdc++.h>

using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n, x ;
        cin >> n >> x ;
        vector <int> pts(n) ;
        for(auto &value : pts) cin >> value ;
        int maxDist = pts[0] ;
        for(int i = 1 ; i < n; i++) maxDist = max(maxDist, pts[i] - pts[i-1]) ;
        maxDist = max(maxDist, 2*(x - pts[n-1])) ;

        cout << maxDist << endl ;
    }
}