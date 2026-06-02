/*

In the Premier League, two teams — 
Team A
Team A and 
Team M
Team M — are competing for the title.

You are given the final points scored by both teams:

If Team A has more points, Team A wins.
If Team M has more points, Team M wins.
If both teams have equal points, the league ends in a DRAW.
Your task is to determine the winner of the league.

Function Declaration
Function Name
f
i
n
d
L
e
a
g
u
e
W
i
n
n
e
r
findLeagueWinner – Determines which team wins the Premier League based on their final points.

Parameters
A
A : An integer representing the points scored by Team A.
M
M : An integer representing the points scored by Team M.
Return Value
Returns a string —

"
T
E
A
M
 
A
"
"TEAM A" if Team A has more points.
"
T
E
A
M
 
M
"
"TEAM M" if Team M has more points.
"
D
R
A
W
"
"DRAW" if both teams have equal points.
Constraints
0
≤
A
,
M
≤
200
0≤A,M≤200
The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled by the driver code.

Input Format
A single line containing two space-separated integers:

A
A — points scored by Team A
M
M — points scored by Team M
Output Format
Print one of the following:

"
T
E
A
M
 
A
"
"TEAM A" if Team A wins
"
T
E
A
M
 
M
"
"TEAM M" if Team M wins
"
D
R
A
W
"
"DRAW" if both teams have equal points
Sample 1:
Input
Output
90 84
TEAM A
Explanation:
Team A has more points than Team M.

Sample 2:
Input
Output
78 81
TEAM M
Explanation:
Team M has more points than Team A.

Sample 3:
Input
Output
88 88
DRAW
Explanation:
Both teams have equal points, so the league ends in a draw.

*/

string findLeagueWinner(int A, int M) {
    if(A>M)
    return "TEAM A";
    else if(A<M)
    return "TEAM M";
    else
    return "DRAW";
    
}