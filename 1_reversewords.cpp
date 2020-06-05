/*
REVERSE WORDS
inp: now youre just somebody that I used to know
out: know to used I that somebody just youre now
*/

#include <bits/stdc++.h>

using namespace std;

string revwurd(string s){
    string rev = "";
    int len = s.length();
    for(int i=len-1 ; i>=0 ; i--){
        rev+=s[i];
    }
    return rev;
}

int main() {
    string inp;
    // inp+=revwurd("think itww") + " ";
    // cout << inp << endl;
    getline(cin, inp);
    // inp = "somewhere over the rainbow";
    string out = "";
    int len = inp.length();
    string wurd = "";
    for(int i=len-1 ; i>=0 ; i--){
        // cout << "---" << inp[i] << endl;
        if(inp[i]==' '){
            // got a space, droogie
            out+=revwurd(wurd)+" ";
            // cout << out << endl;
            wurd = "";
        }else{
            wurd+=inp[i];
        }
    }
    out+=revwurd(wurd);
    cout << out << endl;
    
    
    return 0;
}
