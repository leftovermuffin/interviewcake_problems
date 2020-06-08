/*
STOCK PRICE
inp: 
6 
10 7 5 8 11 9
out:
6
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, stock, minstock=1000000007, profit=-1000000007;
    cin >> n;
    while(n--){
        cin >> stock;
        profit = max(profit, stock-minstock);
        minstock = min(minstock, stock);
    }
    cout << profit << endl;
    
    
    
    return 0;
}
