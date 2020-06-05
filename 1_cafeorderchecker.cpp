/*
CAFE ORDER CHECKER
inp: 
3 
1 3 5
3 
2 4 6 
1 2 4 6 5 3 
out:
NO 

inp:
3 
17 8 24 
3 
12 19 2 
17 8 12 19 24 2 
out:
YUS
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    int ntakeout, ndinein, num;
    cin >> ntakeout;
    vector<int> takeout;
    for(int i=0 ; i<ntakeout ; i++){
        cin >> num;
        takeout.push_back(num);
    }
    cin >> ndinein;
    vector<int> dinein;
    for(int i=0 ; i<ndinein ; i++){
        cin >> num;
        dinein.push_back(num);
    }
    vector<int> served;
    for(int i=0 ; i<ntakeout+ndinein ; i++){
        cin >> num;
        served.push_back(num);
    }
    
    int itakeout = 0;
    int idinein = 0;
    bool just = true;
    for(int i=0 ; i<ntakeout+ndinein ; i++){
        // cout << i << " " << itakeout << " " << idinein << endl;
        if(itakeout<ntakeout && served[i]==takeout[itakeout]){
            itakeout++;
        }else if(idinein<ndinein && served[i]==dinein[idinein]){
            idinein++;    
        }else{
            just = false;
            break;
        }
    }
    if(just) cout << "YUS" << endl;
    else cout << "NO" << endl;
    
    
    return 0;
}

