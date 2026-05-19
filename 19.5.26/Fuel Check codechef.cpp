/*
Chef plans to go on a long drive, and is now checking whether he has enough fuel for the trip.

Chef's car has 
X
X units of fuel remaining.
The car has a fuel efficiency of 
Y
Y, meaning that for each unit of fuel it has, it can travel a distance of 
Y
Y kilometers.

Chef knows that the distance he needs to travel is exactly 
100
100 kilometers.
Does he have enough fuel for his trip?

Input Format
The only line of input will contain two space-separated integers 
X
X and 
Y
Y — the amount of fuel remaining and the car's fuel efficiency, respectively.
Output Format
For each test case, output on a new line the answer: Yes if Chef has enough fuel remaining, and No otherwise.

Each character of the output can be printed in either uppercase or lowercase, i.e. the strings NO, no, No, and nO will all be treated as equivalent.

Constraints
1
≤
X
,
Y
≤
100
1≤X,Y≤100
Sample 1:
Input
Output
10 13
Yes
Explanation:
There are 
X
=
10
X=10 units of fuel remaining.
Each unit of fuel allows the car to travel for 
Y
=
13
Y=13 kilometers.
So, the total distance the car can travel equals 
10
×
13
=
130
10×13=130 kilometers.
Since 
130
≥
100
130≥100, Chef has enough fuel for the trip.

Sample 2:
Input
Output
5 8
No
Explanation:
There are 
X
=
5
X=5 units of fuel remaining.
Each unit of fuel allows the car to travel for 
Y
=
8
Y=8 kilometers.
So, the total distance the car can travel equals 
5
×
8
=
40
5×8=40 kilometers.
Since 
40
<
100
40<100, Chef does not have enough fuel for the trip.

Sample 3:
Input
Output
5 20
Yes
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int c=a*b;
	if(c>=100)
	cout<<"Yes";
	else
	cout<<"No";
	return 0;
}
