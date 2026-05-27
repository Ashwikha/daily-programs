/*
The Exunites are preparing for the 
2025
2025 edition of their annual event, Exun!

After a long day of work, they go to the canteen to buy refreshments.
At the canteen, Chef is selling 
N
N pizzas. However, the Exunites only require 
K
K pizzas.

Each pizza costs 
R
R rupees.
Chef wants to know: after selling 
K
K pizzas to the Exunites, how much revenue can he obtain by selling all his remaining pizzas?

Input Format
The first and only line of input contains 
3
3 space-separated integers 
N
,
K
,
N,K, and 
R
R — the number of pizzas Chef is selling, the number of pizzas required by the Exunites, and the cost of each pizza.

Output Format
Print a single integer — the amount of money (in Rupees) Chef's remaining pizzas can sell for.

Constraints
1
≤
K
≤
N
≤
100
1≤K≤N≤100
1
≤
R
≤
100
1≤R≤100
Sample 1:
Input
Output
10 6 15
60
Explanation:
Chef has 
10
10 pizzas, the Exunites buy 
6
6 of the pizzas so he has 
10
−
6
=
4
10−6=4 pizzas left.
Each of these pizzas sell for 
15
15 rupees, so the total revenue from selling all of the remaining pizzas is 
4
⋅
15
=
60
4⋅15=60 rupees.

Sample 2:
Input
Output
25 18 20
140
Explanation:
Chef has 
25
25 pizzas, the Exunites buy 
18
18 of the pizzas so he has 
25
−
18
=
7
25−18=7 pizzas left.
Each of these pizzas sell for 
20
20 rupees, so the total revenue from selling all of the remaining pizzas is 
7
⋅
20
=
140
7⋅20=140 rupees.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int x,y,z;
cin>>x>>y>>z;
int p=x-y;
cout<<p*z;

}
