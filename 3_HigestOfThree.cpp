/*
HIGHEST OF THREE
inp: 
6 
1 3 5 8 2 5
out:
200

inp:
6 
1 -3 5 2 -2 -5
out:
75

*/


#include <bits/stdc++.h>
#define INF 1000000007
using namespace std;

int main() {
    int n, currNum;
    cin >> n;
    vector<int> nums;
    for(int i=0 ; i<n ; i++){
        cin >> currNum;
        nums.push_back(currNum);
    }
    int highest=max(nums[0], nums[1]);
    int lowest=min(nums[0], nums[1]);
    int twoLowest=nums[0]*nums[1], twoHigest=nums[0]*nums[1];
    int threeHighest=-INF;
    for(int i=2 ; i<n ; i++){
        currNum = nums[i];
        // cout << threeHighest << " " << twoLowest << " " << twoHigest << " " << lowest << " " << highest << endl;
        threeHighest = max(threeHighest, max(twoHigest*currNum, twoLowest*currNum));
        twoLowest = min(twoLowest, min(lowest*currNum, highest*currNum));
        twoHigest = max(twoHigest, max(lowest*currNum, highest*currNum));
        lowest = min(lowest, currNum);
        highest = max(highest, currNum);
    }
    cout << threeHighest << endl;
    
    return 0;
}
