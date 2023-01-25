#include <bits/stdc++.h>
using namespace std;

// YES or YES?
/*
    Para este problema basta con pasar la cadena a mayúsculas
    y después comparar si es igual a "YES".
*/
void solve(){
    string s;
    cin >> s;

    transform(s.begin(),s.end(),s.begin(),::toupper);

    if(s=="YES"){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
} 

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}