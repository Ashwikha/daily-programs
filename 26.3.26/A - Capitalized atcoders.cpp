/*
You are given a non-empty string 
S consisting of uppercase and lowercase English letters. Determine whether the following condition is satisfied:

The first character of 
S is uppercase, and all other characters are lowercase.
Constraints
1≤∣S∣≤100 (
∣S∣ is the length of the string 
S.)
Each character of 
S is an uppercase or lowercase English letter.
Input
The input is given from Standard Input in the following format:

S
Output
If the condition is satisfied, print Yes; otherwise, print No.

Sample Input 1
Copy
Capitalized
Sample Output 1
Copy
Yes
The first character C of Capitalized is uppercase, and all other characters apitalized are lowercase, so you should print Yes.

Sample Input 2
Copy
AtCoder
Sample Output 2
Copy
No
AtCoder contains an uppercase letter C that is not at the beginning, so you should print No.

Sample Input 3
Copy
yes
Sample Output 3
Copy
No
The first character y of yes is not uppercase, so you should print No.

Sample Input 4
Copy
A
Sample Output 4
Copy
Yes
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  cin>>s;
  
  if(s[0])
    {
      if(!(s[0]>='A' && s[0]<='Z'))
      {
        cout<<"No";
        
        return 0;
      }
    }
  for(int i=1;i<s.size();i++)
  {
   
      if(s[i]>='A' && s[i]<='Z')
      {
        cout<<"No";
      
        return 0;
      }
    
  }
  
    cout<<"Yes";
  return 0;
}