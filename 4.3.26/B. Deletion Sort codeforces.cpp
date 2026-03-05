/*
AksLolCoding is playing a game on an array a
 of n positive integers. During each turn:

If a is non-decreasing∗, the game ends.
Otherwise, AksLolCoding can choose any single element and remove it from the array.
Determine the minimum possible number of elements that can be remaining in the array after the game ends.

∗
a is non-decreasing if ai≤ai+1 for all 1≤i≤m−1 , where m is the length of a
.

Input
The first line contains an integer t(1≤t≤1000), the number of test cases.

The first line of each test case contains an integer n(1≤n≤10).

The second line of each test case contains n integers, the elements of a(1≤ai≤100).

Output
For each test case, output an integer: the minimum possible number of elements left once the array is sorted.

Example
Input
3
4
1 4 2 3
1
100
2
6 7
Output
1
1
2
Note
In the first test case, the minimum of 1
 element can be achieved by removing 1
, 2
, and 3
 in that order.

In the second and third test cases, no elements can be removed.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

#define ll long long int

void solve() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    bool dec = false;

    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            dec = true;
            break;
        }
    }

    cout << (dec ? 1 : N) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();
}

