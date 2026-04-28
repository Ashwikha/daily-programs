/*
Three poles stand evenly spaced along a line. Their heights are 
a, 
b and 
c meters, from left to right. We will call the arrangement of the poles beautiful if the tops of the poles lie on the same line, that is, 
b−a=c−b.

Determine whether the arrangement of the poles is beautiful.

Constraints
1≤a,b,c≤100
a, 
b and 
c are integers.
Input
Input is given from Standard Input in the following format:

a 
b 
c
Output
Print YES if the arrangement of the poles is beautiful; print NO otherwise.

Sample Input 1
Copy
2 4 6
Sample Output 1
Copy
YES
Since 
4−2=6−4, this arrangement of poles is beautiful.

Sample Input 2
Copy
2 5 6
Sample Output 2
Copy
NO
Since 
5−2

=6−5, this arrangement of poles is not beautiful.

Sample Input 3
Copy
3 2 1
Sample Output 3
Copy
YES
Since 
1−2=2−3, this arrangement of poles is beautiful.
*/


#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(b-a==c-b)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
  return 0;
}