/*
WORD CLOUD
inp: 
After beating the eggs, Dana read the next step: Add milk and eggs, then add flour and sugar.

out:
after: 1 
beating: 1 
the: 2 
eggs: 2 
...


this be a doable code
*/

#include <bits/stdc++.h>

using namespace std;

void lowerthevoice(string& s){
    for(int i=0 ; s[i] ; i++){
        s[i] = tolower(s[i]);
    }
}

int main() {
    string s;
    getline(cin, s);
    unordered_map<string,int> map;
    vector<string> words;
    string word="";
    
    int len = s.length();
    for(int i=0 ; i<=len ; i++){
        if(!isalpha(s[i])){
            if(word.length()<1) continue;
            lowerthevoice(word);
            if(map[word]==0) words.push_back(word);
            map[word]++;
            word = "";
        }else{
            word+=s[i];
        }
    }
    for(int i=0 ; i<words.size() ; i++){
        cout << words[i] << ": " << map[words[i]] << endl;
    }
    
    return 0;
}
