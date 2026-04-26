/*
You are given a sequence of positive integers of length 
N: 
A=(A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 ).

Find the sum of the odd-indexed elements of 
A. That is, find 
A 
1
​
 +A 
3
​
 +A 
5
​
 +⋯+A 
m
​
 , where 
m is the largest odd number not exceeding 
N.

Constraints
1≤N≤100
1≤A 
i
​
 ≤100
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
A 
1
​
  
A 
2
​
  
… 
A 
N
​
 
Output
Print the answer.

Sample Input 1
Copy
7
3 1 4 1 5 9 2
Sample Output 1
Copy
14
The sum of the odd-indexed elements of 
A is 
A 
1
​
 +A 
3
​
 +A 
5
​
 +A 
7
​
 =3+4+5+2=14.

Sample Input 2
Copy
1
100
Sample Output 2
Copy
100
Sample Input 3
Copy
14
100 10 1 10 100 10 1 10 100 10 1 10 100 10
Sample Output 3
Copy
403
*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  int sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    if((i+1)%2!=0)
    {
      sum+=arr[i];
    }
  }
  cout<<sum;
  return 0;
}