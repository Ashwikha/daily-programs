/*




#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,a;
  cin>>n>>a;
  string s;
  cin>>s;
  s[a-1]=tolower(s[a-1]);
  cout<<s;
  return 0;
}
You are given a string 
S of length 
N consisting of A, B and C, and an integer 
K which is between 
1 and 
N (inclusive). Print the string 
S after lowercasing the 
K-th character in it.

Constraints
1≤N≤50
1≤K≤N
S is a string of length 
N consisting of A, B and C.
Input
Input is given from Standard Input in the following format:

N 
K
S
Output
Print the string 
S after lowercasing the 
K-th character in it.

Sample Input 1
Copy
3 1
ABC
Sample Output 1
Copy
aBC
Sample Input 2
Copy
4 3
CABA
Sample Output 2
Copy
CAbA
*/