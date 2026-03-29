/*
Takahashi is learning AtCoderish Language.

He memorizes AtCoderish words corresponding to English words.

He knows that red, blue, and green in English respectively correspond to SSS, FFF, and MMM in AtCoderish, and he knows no other words.

You are given a string 
S consisting of lowercase English letters. If 
S equals an English word that Takahashi knows corresponds to an AtCoderish word, output the AtCoderish word corresponding to 
S; otherwise, output the string Unknown.

Constraints
S is a string of length between 
1 and 
10, inclusive, consisting of English letters.
Input
The input is given from Standard Input in the following format:

S
Output
Output a string according to the instructions in the problem statement.

Sample Input 1
Copy
red
Sample Output 1
Copy
SSS
red in English corresponds to SSS in AtCoderish.

Sample Input 2
Copy
atcoder
Sample Output 2
Copy
Unknown
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s=="red")
  cout<<"SSS";
  else if(s=="blue")
  cout<<"FFF";
  else if(s=="green")
  cout<<"MMM";
  else
  cout<<"Unknown";
  return 0;
  
}