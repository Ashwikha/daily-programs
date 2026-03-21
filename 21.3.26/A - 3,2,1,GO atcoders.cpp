/*
You are given a positive integer 
N.

Output 
N,N−1,…,1 in this order, separated by commas ,.

Constraints
1≤N≤9
N is an integer.
Input
The input is given from Standard Input in the following format:

N
Output
Output 
N,N−1,…,1 in this order, separated by commas.

Sample Input 1
Copy
9
Sample Output 1
Copy
9,8,7,6,5,4,3,2,1
Sample Input 2
Copy
5
Sample Output 2
Copy
5,4,3,2,1
Sample Input 3
Copy
1
Sample Output 3
Copy
1
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=n;i>=2;i--){
    cout<<i<<",";
    
  }
  cout<<"1";
  return 0;
  
}