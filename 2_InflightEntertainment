/*
INFLIGHT ENTERTAINMENT
inp: 
9
6 
1 2 4 6 5 10 

out:
YES 

inp:
19
6 
1 2 4 6 5 10 
 
out:
NO
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num, total;
    bool possible = false;
    
    cin >> total;
    cin >> n;
    vector<int> id;
    unordered_map<int, bool> map;
    
    for(int i=0 ; i<n ; i++){
        cin >> num;
        if(map[total-num]){
            possible = true;
        }
            
        id.push_back(num);
        map[num] = true;
    }
    
    
    for(int i=0 ; i<n and !possible ; i++){
        if(map[total-id[i]] and 2*id[i]!=total){
            possible = true;
        }
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}


















/*
INFLIGHT ENTERTAINMENT
inp: 
9
6 
1 2 4 6 5 10 

out:
YES 

inp:
19
6 
1 2 4 6 5 10 
 
out:
NO
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num, total;
    bool possible = false;
    
    cin >> total;
    cin >> n;
    vector<int> id;
    unordered_map<int, bool> map;
    
    for(int i=0 ; i<n ; i++){
        cin >> num;
        if(map[total-num]){
            possible = true;
        }
            
        id.push_back(num);
        map[num] = true;
    }
    
    
    for(int i=0 ; i<n and !possible ; i++){
        if(map[total-id[i]] and 2*id[i]!=total){
            possible = true;
        }
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}

