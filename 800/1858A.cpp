#include <bits/stdc++.h>

using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int a, b, c ;
        cin >> a >> b >> c ;
        int Maxi = max(a,b) ;
        if(c %2 == 0){
            if(a == b){
                cout << "Second" << endl ;
            }
            else if(Maxi == a){
                cout << "First" << endl ;
            }
            else {
                cout << "Second" << endl ;
            }
        }
        else {
            if(a == b){
                cout << "First" << endl ;
            }
            else if(Maxi == a){
                cout << "First" << endl ;
            }
            else {
                cout << "Second" << endl ;
            }
        }
    }
}
