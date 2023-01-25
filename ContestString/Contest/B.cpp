#include <bits/stdc++.h>
using namespace std;

// Square String?
/*
    Si el tamaño de la string es impar, la respuesta es no, ya que 
    concatenar dos cadenas iguales nos da una longitud par.
    Posteriormente sólo tenemos que comparar las dos mitades
    de la cadena para ver si estas son iguales;
*/

void solve(){
    string s; cin >> s;
    int n = s.length();
    if(n % 2 != 0){
        cout << "NO" << endl;
    } else {
        if(s.substr(0,n/2) == s.substr(n/2,s.size())){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
