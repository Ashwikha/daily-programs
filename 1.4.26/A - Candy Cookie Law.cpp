/*
In AtCoder Country where Takahashi lives, there is a strange law that "a person who possesses 
A or more candies must possess 
B or more cookies."

Takahashi possesses 
C candies and 
D cookies. Determine whether Takahashi is violating this law.

Constraints
1≤A,B,C,D≤100
All input values are integers.
Input
The input is given from Standard Input in the following format:

A 
B 
C 
D
Output
Print Yes if Takahashi is violating the law, and No otherwise.

Sample Input 1
Copy
10 20 30 40
Sample Output 1
Copy
No
In AtCoder Country, there is a law that "a person who possesses 
10 or more candies must possess 
20 or more cookies."

Takahashi possesses 
30 candies and 
40 cookies, so he is not violating this law.

Sample Input 2
Copy
10 20 30 4
Sample Output 2
Copy
Yes
Sample Input 3
Copy
100 100 1 1
Sample Output 3
Copy
No
*/

#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(c>=a && d<b)
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
  return 0;
}