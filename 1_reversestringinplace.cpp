/*
reverse string in place
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    int len = word.length();
    for(int i=0 ; i<len/2 ; i++){
        // char c = word[i];
        // word[i] = word[len-i-1];
        // word[len-i-1] = c;
        swap(word[i], word[len-i-1]);
    }
    cout << word << endl;
    
    
    return 0;
}
