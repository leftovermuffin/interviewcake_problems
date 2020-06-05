/*
MERGE SORTED ARRAY
inp: 
4
1 4 6 9 
3 
2 3 7
out: 
1 2 3 4 6 7 9
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, m, num;
    cin >> n;
    vector<int> a;
    for(int i=0 ; i<n ; i++){
        cin >> num;
        a.push_back(num);
    }
    cin >> m;
    vector<int> b;
    for(int i=0 ; i<m ; i++){
        cin >> num;
        b.push_back(num);
    }
    
    vector<int> mergerd;
    int ai = 0;
    int bi = 0;
    
    while(ai<n and bi<m){
        if(a[ai]<b[bi]){
            mergerd.push_back(a[ai++]);
        }else{
            mergerd.push_back(b[bi++]);
        }
    }
    if(ai==n){
        for(int i=bi ; i<m ; i++)
            mergerd.push_back(b[i]);
    }else{
        for(int i=ai ; i<n ; i++)
            mergerd.push_back(a[i]);
    }
    
    for(int i=0 ; i<n+m ; i++){
        cout << mergerd[i] << " ";
    }
    
    
    
    return 0;
}

