/*
TOP SCORES
inp: 
100
6
37 89 41 65 91 53

out:
91 89 65 53 41 37
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    int highestScore, n, score;
    cin >> highestScore;
    cin >> n;
    unordered_map<int,int> scores;
    for(int i=0 ; i<n ; i++){
        cin >> score;
        scores[score]++;
    }
    for(int i=highestScore ; i>=0 ; i--){
        
        while(scores[i]>0){
            cout << i << " "; 
            scores[i]--;
        }
    }
    
    return 0;
}

