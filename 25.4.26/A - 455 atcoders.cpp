/*
You are given integers 
A,B,C. If 
A

=B and 
B=C, output Yes; otherwise, output No.

Constraints
1≤A,B,C≤9
All input values are integers.
Input
The input is given from Standard Input in the following format:

A 
B 
C
Output
Output Yes or No according to the instructions in the problem statement.

Sample Input 1
Copy
4 5 5
Sample Output 1
Copy
Yes
Since 
4

=5 and 
5=5, output Yes.

Sample Input 2
Copy
1 3 7
Sample Output 2
Copy
No
Although 
1

=3, we don't have 
3=7, so output No.

Sample Input 3
Copy
6 6 6
Sample Output 3
Copy
No
*/


#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a!=b && b==c)
  cout<<"Yes";
  else
  cout<<"No";
  return 0;
}