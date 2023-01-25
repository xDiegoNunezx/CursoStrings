#include <bits/stdc++.h>
using namespace std;

// AB Balance
/*
    El truco está en observar que si la primera y ultima 
    letra de la cadena son iguales, entonces AB(s) = BA(s).
    Por lo tanto, si son iguales desde el prinpcipio
    imprimimos 0. Si no, unicamente remplazamos la primera 
    o la ultima.
*/
void solve(){
    string s; cin >> s;
    int n = s.length();
    
    if(s[0]!=s[n-1]){
        if(s[0]=='a'){
            s[n-1] = 'a';
        } else {
            s[n-1] = 'b';
        }
    }

    cout << s << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}