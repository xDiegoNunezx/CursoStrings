#include <bits/stdc++.h>
using namespace std;

// Infinite Replacement
/*
    If there are letters 'a' in string t, 
    then the moves can be performed endlessly. 
    If t itself is equal to "a", then the string won't change, 
    so the answer is 1. Otherwise, the length of t is least 2, 
    so string s will be increasing in length after each move, 
    and the answer is -1.

    If there are no letters 'a' in string t, then the resulting 
    string is only determined by whichever letters 'a' we chose 
    to replace with t. That's because once we replace a letter 
    'a' with string t, we can do nothing with the new letters 
    anymore. 
    
    We can actually imagine that t is equal to "b", and 
    the answer won't change. Now it's easy to see that the answer 
    is equal to the number of strings of length n, consisting only 
    of letters 'a' and 'b'. There are two options for each position, 
    and there are n positions, so the answer is 2^n.
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