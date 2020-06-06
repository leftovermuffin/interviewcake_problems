/*
PERMUTATION PALINDROME
inp: 
civic

out:
YES 

inp:
livic 
 
out:
NO
*/

#include <bits/stdc++.h>

using namespace std;

bool ispermpalin(string s){
    unordered_map<char,int> map;
    for(int i=0 ; map[i] ; i++)
        map[s[i]]++;
    
    int odds = 0;
    for(int i=0 ; map[i] ; i++){
        if(map[s[i]]%2==1)
            odds++;
    }
    if(odds>1) return false;
    return true;
}

int main() {
    string s;
    cin >> s;
    if(ispermpalin(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
