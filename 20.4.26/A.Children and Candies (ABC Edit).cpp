/*
There are 
N children in AtCoder Kindergarten. Mr. Evi will arrange the children in a line, then give 
1 candy to the first child in the line, 
2 candies to the second child, ..., 
N candies to the 
N-th child. How many candies will be necessary in total?

Constraints
1≦N≦100
Input
The input is given from Standard Input in the following format:

N
Output
Print the necessary number of candies in total.

Sample Input 1
Copy
3
Sample Output 1
Copy
6
The answer is 
1+2+3=6.

Sample Input 2
Copy
10
Sample Output 2
Copy
55
The sum of the integers from 
1 to 
10 is 
55.

Sample Input 3
Copy
1
Sample Output 3
Copy
1
Only one child. The answer is 
1 in this case.
*/

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
for(int i=1;i<=n;i++)
{
  sum+=i;
}
cout<<sum;
return 0;
}