#include <bits/stdc++.h>
using namespace std;

// Atilla's Favorite Problem
/*
    La solucion está en recorrer todos los
    caracteres y encontrar el lexicograficamente
    mayor. Esto se hace con ayuda de la funcion max,
    que recibe dos enteros y nos devuelve el mayor.
    Recordar que los char pueden ser considerados 
    enteros con su valor ascii.
    Al final le restamos el valor en ascii del caracter
    'a' para obtener el número de la letra en el alfabeto.

*/

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    
    char maxC='a';
    for(char c : s) {
        maxC = max(maxC,c);
    }
    cout << (int) maxC - 'a' + 1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
