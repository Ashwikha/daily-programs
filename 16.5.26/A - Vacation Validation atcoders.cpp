/*
You are given a string 
S of length 
N consisting of o and x, and integers 
L and 
R.

Determine whether all characters from the 
L-th through the 
R-th character of 
S are o.

Constraints
1≤N≤100
1≤L≤R≤N
S is a string of length 
N consisting of o and x.
N, 
L, and 
R are all integers.
Input
The input is given from Standard Input in the following format:

N 
L 
R
S
Output
If all characters from the 
L-th through the 
R-th character of 
S are o, output Yes; otherwise, output No.

Sample Input 1
Copy
10 6 8
xoxxooooxo
Sample Output 1
Copy
Yes
All characters from the 
6-th through the 
8-th character of 
S are o, so the answer is Yes.

Sample Input 2
Copy
9 6 8
xoxxoxoox
Sample Output 2
Copy
No
The 
6-th character is x, so the answer is No.
*/


#include<iostream>
using namespace std;
int main(){
  int n,a,b;
  cin>>n>>a>>b;
  string s;
  cin>>s;
  for(int i=a-1;i<b;i++){
    if(s[i]!='o'){
      cout<<"No";
      return 0;
    }
  }
  cout<<"Yes";
  return 0;
}