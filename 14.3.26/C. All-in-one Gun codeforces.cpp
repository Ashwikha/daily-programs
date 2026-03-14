/*
You are developing a new shooter game, but since there are a lot of shooter games out there, you decide to have something unique in your game.

You have an all-in-one gun that shoots bullets in a fixed order. There are n
 bullets in the magazine, the i
-th of which deals ai
 damage. The enemy starts with h
 health and dies when its health becomes ≤0
.

The gun shoots one bullet per second. After firing all n
 bullets, it must reload, which takes k
 seconds. Reloading always restores the same sequence of bullets [a1,a2,…,an]
. You cannot reload early; you must empty the magazine first. At the start, the magazine is already full.

Before the fight begins, you may perform at most one swap: pick any indices 1≤i<j≤n
 and exchange ai
 with aj
.

Your task is to find the minimum number of seconds needed to kill the enemy, taking into account this optional single swap.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each testcase contains three integer n
, h
 and k
 (2≤n≤2⋅105
, 1≤h,k≤109
) — the size of magazine, health of your enemy and time required to reload the magazine.

The second line of each testcase contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

It is guaranteed that the sum of n
 does not exceed 2⋅105
 over all test cases.

Output
For each testcase, output a single integer denoting the minimum time required to kill the enemy.

Example
InputCopy
6
5 10 1
4 2 3 5 3
5 10 1
4 2 3 7 3
3 10 2
1 2 3
2 5 3
2 1
3 18 5
1 2 3
4 10 10
1 1 2 2
OutputCopy
3
2
7
6
19
17
Note
In the first test case, you swap the bullets present at index 2
 and 5
. This makes array a
 as 4,3,3,5,2
.

After 3
 seconds, the health of your enemy will be 10−4−3−3=0
, hence the enemy dies in 3
 seconds. It can be shown that achieving time to kill less than 3
 is not possible.

In the third test case, you swap bullets present at index 1
 and 3
. This makes array a
 as 3,2,1
.

In 7
 seconds, you shoot the entire first magazine (3
 seconds) +
 reload a new magazine (2
 seconds) +
 shoot the first and the second bullet from the new magazine (2
 seconds).

The health of the enemy will be 10−3−2−1−3−2=−1
, hence the enemy dies in 7
 seconds. It can be shown that achieving time to kill less than 7
 is not possible.

*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>

using namespace std;
#define ll long long int

void solve() {
    int N;
    ll h, k, sum = 0;
    cin >> N >> h >> k;

    vector<int> arr(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    ll rr = (h - 1) / sum;
    ll ans = rr * (N + k);
    h = h - (rr * sum);

    int lmin = 1000000005;
    vector<int> rb(N + 1, 0);

    for (int i = N - 1; i >= 1; i--) {
        rb[i] = max(rb[i + 1], arr[i + 1]);
    }

    sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += arr[i];
        lmin = min(lmin, arr[i]);

        if (sum >= h || (sum - lmin + rb[i]) >= h) {
            ans += i;
            break;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();
}