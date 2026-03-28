/*
You are given a string 
S consisting of lowercase English letters.

Swap the 
a-th and 
b-th characters from the beginning of 
S and print the resulting string.

Constraints
S is a string consisting of lowercase English letters.
The length of 
S, 
∣S∣, satisfies 
2≤∣S∣≤10.
1≤a<b≤∣S∣
a and 
b are integers.
Input
Input is given from Standard Input in the following format:

S
a 
b
Output
Print the answer.

Sample Input 1
Copy
chokudai
3 5
Sample Output 1
Copy
chukodai
After swapping the 
3-rd character o and 
5-th character u of chokudai, we have chukodai.

Sample Input 2
Copy
aa
1 2
Sample Output 2
Copy
aa
In this sample, after swapping the 
1-st and 
2-nd characters of 
S, we have the same string as 
S.

Sample Input 3
Copy
aaaabbbb
1 8
Sample Output 3
Copy
baaabbba
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  int a,b;
  cin>>a>>b;
  int c=a-1;
  int d=b-1;
  char temp;
  temp=s[c];
  s[c]=s[d];
  s[d]=temp;
  cout<<s;
  return 0;
}