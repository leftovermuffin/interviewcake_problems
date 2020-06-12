/*
FIND ROTATION POINT

*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // given a vecotor of string
    const vector<string> words {
       "x", "a", "b", "e", "k", "r", "s", "u"
    };
        
    
    int n = words.size();
    int left = 0, right = n-1;
    int mid, point=-1;
    
    while(left<right){
        // cout << left << "--" << mid << "--" << right << endl;
        mid = left + (right-left)/2;
        if(words[mid].compare(words[0])<0){ 
            right = mid;
        }else{
            left = mid;
        }
        
        if(left==right-1){
            point = right;
            break;
        }
    
    }
    cout << point << endl;
    
    
    return 0;
}
