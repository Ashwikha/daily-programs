/*
The versions of a certain OS in chronological order are "Ocelot", "Serval", "Lynx".
Determine whether version 
X is the same as or newer than version 
Y.

Constraints
Each of 
X and 
Y is one of "Ocelot", "Serval", "Lynx" (without quotation marks).
Input
The input is given from Standard Input in the following format:

X 
Y
Output
If version 
X is the same as or newer than version 
Y, print Yes; otherwise, print No.

Sample Input 1
Copy
Serval Ocelot
Sample Output 1
Copy
Yes
Version Serval is the same as or newer than version Ocelot. Therefore, print Yes.

Sample Input 2
Copy
Serval Lynx
Sample Output 2
Copy
No
Version Serval is not the same as nor newer than version Lynx. Therefore, print No.

Sample Input 3
Copy
Ocelot Ocelot
Sample Output 3
Copy
Yes
Version Ocelot itself is the same as or newer than version Ocelot. Therefore, print Yes.

*/

#include<iostream>
using namespace std;
int main()
{
  string s,t;
  cin>>s>>t;
  if(s==t)
  cout<<"Yes";
  else if(s=="Lynx" &&  (t=="Serval"|| t=="Ocelot"))
  cout<<"Yes";
  else if(s=="Serval" && t=="Ocelot")
  cout<<"Yes";
  else
  cout<<"No";
  return 0;
}