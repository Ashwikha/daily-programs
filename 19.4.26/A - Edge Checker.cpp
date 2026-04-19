/*
In the figure shown in the image below, are the points numbered 
a and 
b directly connected by a line segment?

1 2 3 4 5 6 7 8 9 10 


Constraints
1≤a<b≤10
a and 
b are integers.
Input
Input is given from Standard Input in the following format:

a 
b
Output
If the points numbered 
a and 
b are directly connected by a line segment, print Yes; otherwise, print No.
The judge is case-sensitive: be sure to print uppercase and lowercase letters correctly.

Sample Input 1
Copy
4 5
Sample Output 1
Copy
Yes
In the figure shown in the Problem Statement, the points numbered 
4 and 
5 are directly connected by a line segment.
Thus, Yes should be printed.

Sample Input 2
Copy
3 5
Sample Output 2
Copy
No
In the figure shown in the Problem Statement, the points numbered 
3 and 
5 are not directly connected by a line segment.
Thus, No should be printed.

Sample Input 3
Copy
1 10
Sample Output 3
Copy
Yes


#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a==1 && b==10 || a==10 || b==1)
  cout<<"Yes";
  else if(abs(a-b)==1)
  cout<<"Yes";
  else
  cout<<"No";
  return 0;
}