#include <bits/stdc++.h>
using namespace std;
// Compare T-Shirt Sizes

/*
    Primero hay que notar que S, M y L están en orden inverso
    en el alfabeto.
    Se comparan las últimas letras de las cadenas. 
    Si estas son diferentes, entonces simplemente hay que ver
    cual es mayor.
    Si son iguales, entonces tenemos tres casos:
    Si tienen la misma longitud, son la misma talla.
    Si son talla S, entonces en cuanto mayor sea el 
    tamaño de la string, menor será el tamaño de la camisa.
    Si son talla L, entonces en cuanto mayor sea el 
    tamaño de la string, mayor será el tamaño de la camisa.
*/
void solve(){
    string a,b; cin >> a >> b;
    char ca = a.back();
    char cb = b.back();
    if (ca == cb) {
        if (a.size() == b.size()) cout << '=';
        else if (ca == 'S') {
            cout << (a.size() < b.size() ? '>' : '<');
        } else {
            cout << (a.size() < b.size() ? '<' : '>');
        }
    } else {
        cout << (ca < cb ? '>' : '<');
    }
    cout << '\n';
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}