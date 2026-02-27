/*You are given a trapezoid. The lengths of its upper base, lower base, and height are 
a, 
b, and 
h, respectively.


An example of a trapezoid

Find the area of this trapezoid.

Constraints
1≦a≦100
1≦b≦100
1≦h≦100
All input values are integers.
h is even.
Input
The input is given from Standard Input in the following format:

a
b
h
Output
Print the area of the given trapezoid. It is guaranteed that the area is an integer.

Sample Input 1
Copy
3
4
2
Sample Output 1

7
When the lengths of the upper base, lower base, and height are 
3, 
4, and 
2, respectively, the area of the trapezoid is 
(3+4)×2/2=7.

Sample Input 2

4
4
4
Sample Output 2

16
In this case, a parallelogram is given, which is also a trapezoid.
*/

#include<stdio.h>
int main()
{
  int a,b,h;
  scanf("%d %d %d",&a,&b,&h);
  int ans=((a+b)*h)/2;
  printf("%d",ans);
  return 0;
  

}
