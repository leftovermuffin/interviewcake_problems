/*
merging meeting times
https://www.interviewcake.com/question/cpp/merging-ranges?course=fc1&section=array-and-string-manipulation

inp: [Meeting(0, 1), Meeting(3, 5), Meeting(4, 8), Meeting(10, 12), Meeting(9, 10)]
5
0 1
3 5
4 8
10 12
9 10
out: [Meeting(0, 1), Meeting(3, 8), Meeting(9, 12)]
0 1
3 8
9 12

*/

#include <bits/stdc++.h>
using namespace std;

/*
approach #1
O(n^2)

Fill the gaps from start to finish. 
For handling the neighbouring meetings, we multiply the time by 2.

int main() {
    int n, a, b;
    cin >> n;
    vector<int> timeline(100, 0);
    while(n--){
        cin >> a >> b;
        a*=2;
        b*=2;
        for(int i=a ; i<=b ; i++)
            timeline[i]=1;
    }
    for(int i=0 ; i<100 ; i++){
        if(timeline[i]==1){
            cout << i/2 << " ";
            while(timeline[i]==1){
                i++;
            }
            cout << (i-1)/2 << endl;
        }
    }
    return 0;
}

*/


/*
approach #2
O(nlogn)

take the inputs as vector of pairs
sort them by start time
if overlaps, merge

*/


int main() {
    int n, a, b;
    cin >> n;
    vector< pair<int,int> > timeline;
    while(n--){
        cin >> a >> b;
        timeline.push_back(make_pair(a,b));
    }
    sort(timeline.begin(), timeline.end());
    
    vector< pair<int,int> > finaltimeline;
    
    int start = timeline[0].first;
    int end = timeline[0].second;
    
    for(int i=1 ; i<timeline.size() ; i++){
        if(end < timeline[i].first){
            // okay no overlaps
            finaltimeline.push_back(make_pair(start, end));
            start = timeline[i].first;
            end = timeline[i].second;
        }
        else{
            end = max(end, timeline[i].second);
        }
    }
    finaltimeline.push_back(make_pair(start, end));
    
    for(int i=0 ; i<finaltimeline.size() ; i++){
        cout << finaltimeline[i].first << " " << finaltimeline[i].second << endl;
    }
    return 0;
}

