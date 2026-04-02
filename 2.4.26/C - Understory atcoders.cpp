/*
Takahashi is managing the number of trees in his garden. Initially, there are no trees in the garden.

Q queries are given in order. Each query is one of the following two types. Immediately after processing each query, output the number of trees currently in the garden.

1 h : Add one new tree of height 
h to the garden.
2 h : Remove all trees currently in the garden whose height is at most 
h.
Constraints
1≤Q≤3×10 
5
 
1≤h≤10 
9
 
All input values are integers.
Input
The input is given from Standard Input in the following format:

Q
query 
1
​
 
query 
2
​
 
⋮
query 
Q
​
 
query 
i
​
 , representing the 
i-th query, is one of the following two types:

1 
h
2 
h
Output
Output 
Q lines.

The 
i-th line should contain the number of trees in the garden immediately after processing the 
i-th query.

Sample Input 1
Copy
5
1 5
1 7
1 8
2 7
1 3
Sample Output 1
Copy
1
2
3
1
2
The number of trees changes as follows.

A tree of height 
5 is added. The garden contains one tree of height 
5.
A tree of height 
7 is added. The garden contains two trees of heights 
5,7.
A tree of height 
8 is added. The garden contains three trees of heights 
5,7,8.
Trees of height at most 
7 are removed. The garden contains one tree of height 
8.
A tree of height 
3 is added. The garden contains two trees of heights 
8,3.
Sample Input 2
Copy
12
2 256601193
1 85138616
1 202564041
2 276477192
1 55551662
1 170271057
2 754166580
1 854388209
1 772036624
2 651124113
1 301137866
2 290875185
Sample Output 2
Copy
0
1
2
0
1
2
0
1
2
2
3
3
*/

#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;

#define ll long long int

void solve() {
    int Q;
    cin >> Q;

    priority_queue<int, vector<int>, greater<>> minh;

    while (Q--) {
        int qt, h;
        cin >> qt >> h;

        if (qt == 1) {
            minh.push(h);
        } else {
            while (!minh.empty() && minh.top() <= h) {
                minh.pop();
            }
        }

        cout << minh.size() << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1; 
    while (t--) {
    solve();
}
    return 0;
}