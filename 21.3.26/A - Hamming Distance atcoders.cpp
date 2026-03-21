/*
You are given a positive integer 
N and two strings 
S and 
T, each of length 
N and consisting of lowercase English letters.

Find the Hamming distance between 
S and 
T. That is, find the number of integers 
i such that 
1≤i≤N and the 
i-th character of 
S is different from the 
i-th character of 
T.

Constraints
1≤N≤100
N is an integer.
Each of 
S and 
T is a string of length 
N consisting of lowercase English letters.
Input
The input is given from Standard Input in the following format:

N
S
T
Output
Print the answer.

Sample Input 1
Copy
6
abcarc
agcahc
Sample Output 1
Copy
2
S and 
T differ in the 2nd and 5th characters, but not in other characters. Thus, the answer is 
2.

Sample Input 2
Copy
7
atcoder
contest
Sample Output 2
Copy
7
Sample Input 3
Copy
8
chokudai
chokudai
Sample Output 3
Copy
0
Sample Input 4
Copy
10
vexknuampx
vzxikuamlx
Sample Output 4
Copy
4
*/

#include<iostream>
using namespace std;
int main(){
  int a;
  cin>>a;
  string s,t;
  cin>>s>>t;
  int count=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]!=t[i])
    {
      count++;
    }
  }
  cout<<count;
  return 0;
}