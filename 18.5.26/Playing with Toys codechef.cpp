/*
Chef got 
N
N toys for his birthday. Everyday, if he has at least one toy with him, he plays with one specific toy for that day.

Unfortunately, Chef is very careless, and will inevitably break that toy by the end of the day. When he does break it, he does not play with a new toy but just waits for the next day.

After 
M
M days, how many toys will Chef be left with?

Input Format
The first and only line of each test case contains 
2
2 integers - 
N
N and 
M
M.
Output Format
Output the number of toys left with Chef after 
M
M days

Constraints
1
≤
N
,
M
≤
10
1≤N,M≤10
Sample 1:
Input
Output
1 2
0
Explanation:
Chef had 
1
1 toy only, and he broke it on day 
1
1. On day 
2
2 he had nothing to play with. He is left with 
0
0 toys after day 
2
2.

Sample 2:
Input
Output
5 3
2

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
if(a<b)
{
    cout<<0;
}
else
{
    cout<<a-b;
    
}
return 0;
}
