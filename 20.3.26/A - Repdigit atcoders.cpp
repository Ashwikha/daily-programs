/*
You are given a 
3-digit positive integer 
N. Determine whether all digits are the same when 
N is represented in decimal.

Constraints
100≤N≤999
The input value is an integer.
Input
The input is given from Standard Input in the following format:

N  
Output
If all digits are the same when 
N is represented in decimal, output Yes in one line; otherwise, output No.

Sample Input 1
Copy
444
Sample Output 1
Copy
Yes
The digits of 
444 are 
4,4,4, which are the same, so output Yes.

Sample Input 2
Copy
160
Sample Output 2
Copy
No
The digits of 
160 are 
1,6,0, which are not the same, so output No.

Sample Input 3
Copy
999
Sample Output 3
Copy
Yes
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a=n%10;
  int b=(n/10)%10;
  int c=(n/100)%10;
  if(a==b && a==c && b==c)
  cout<<"Yes";
  else
  cout<<"No";
  return 0;
}