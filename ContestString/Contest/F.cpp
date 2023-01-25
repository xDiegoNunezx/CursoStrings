#include <bits/stdc++.h>
using namespace std;

// Infinite Replacement
/*
    Si hay letras 'a' en la cadena t,
     entonces los movimientos se pueden realizar sin fin.
     Si t mismo es igual a "a", entonces la cadena no cambiará,
     por lo que la respuesta es 1. De lo contrario, la longitud de t es al menos 2,
     entonces la cadena s aumentará en longitud después de cada movimiento,
     y la respuesta es -1.

     Si no hay letras 'a' en la cadena t, entonces el resultado
     la cadena solo está determinada por las letras 'a' que elegimos
     para reemplazar con t. Eso es porque una vez que reemplazamos una letra
     'a' con la cadena t, no podemos hacer nada con las nuevas letras agregadas.
    
     De hecho, podemos imaginar que t es igual a "b", y
     la respuesta no cambiará. Ahora es fácil ver que la respuesta
     es igual al número de cadenas de longitud n que consisten solo
     de las letras 'a' y 'b'. Hay dos opciones para cada posición,
     y hay n posiciones, entonces la respuesta es 2^n.
*/
void solve(){
    string s; cin >> s;
    string t; cin >> t;
    if(t=="a"){
        cout << "1" << endl;
    } else if(t.find('a')!=-1){
        cout << "-1" << endl;
    } else {
        long long ans=1;
        for(long long i=0; i<s.size(); i++){
            ans *= 2;
        }
        cout << ans << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}