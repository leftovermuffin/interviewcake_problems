/*
PRODUCT OF ALL OTHER NUMBERS
inp: 
6 
1 7 3 4
out:
84 12 28 21
*/


#include <bits/stdc++.h>
#define INF 1000000007
using namespace std;

int main() {
    int n, currNum;
    cin >> n;
    vector<int> nums(n), products(n);
    
    for(int i=0 ; i<n ; i++){
        cin >> currNum;
        nums[i] = currNum;
        if(i==0) 
            products[0] = 1;
        else
            products[i] = products[i-1]*nums[i-1];
            
        // cout << i << "--" << products[i] << endl;
    }
    
    int product = 1;
    
    for(int i=n-2 ; i>=0 ; i--){
        product*= nums[i+1];
        products[i] = products[i]*product;
        // cout << i << "--" << products[i] << endl;
    }
    for(int i=0 ; i<n ; i++){
        cout << products[i] << " ";
    }
    
    
    return 0;
}
