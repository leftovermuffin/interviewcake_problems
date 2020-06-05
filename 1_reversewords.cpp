/*
REVERSE WORDS
inp: now youre just somebody that I used to know
out: know to used I that somebody just youre now
*/

#include <bits/stdc++.h>
using namespace std;

void rev(string& s, int l, int r){
    while(l<r){
        swap(s[l], s[r]);
        l++;
        r--;
    }
}

int main() {
    string inp;
    getline(cin, inp);
    string out = "";
    int len = inp.length();
    
    //rewind time!
    rev(inp, 0, len-1);
    
    int startpos = 0;
    for(int i=0 ; i<=len ; i++){
        if(inp[i]==' ' or i==len){
            rev(inp, startpos, i-1);
            startpos = i+1;
        }
    }
    
    cout << inp << endl;
    return 0;
}










/*
this is not the in-place solution


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

*/
