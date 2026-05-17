/*
Chef opened a tree-selling business this Christmas.

He bought 
N
N trees for 
A
A rupees, and then sold 
M
M trees for 
B
B rupees.

What was his profit this Christmas? If Chef instead made a loss of 
X
X rupees, print 
−
X
−X.

Input Format
The first and only line of input contains 
4
4 integers - 
N
,
A
,
M
N,A,M and 
B
B.
Output Format
Output Chef's profit this christmas.

Constraints
1
≤
M
≤
N
≤
100
1≤M≤N≤100
100
≤
A
≤
B
≤
1000
100≤A≤B≤1000
Sample 1:
Input
Output
5 100 2 1000
1500
Explanation:
Chef bought 
5
5 trees for 
100
100 rupees, and then sold 
2
2 trees for 
1000
1000 rupees, thus his profit was 
2000
−
500
=
1500
2000−500=1500 rupees.

Sample 2:
Input
Output
5 100 2 100
-300

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x=a*b;
	int y=c*d;
	cout<<y-x;
	return 0;
}
