/*
You are given an integer 
X between 
1 and 
10, inclusive.

Output the string obtained by deleting only the 
X-th character from the string HelloWorld.

Constraints
X is an integer between 
1 and 
10, inclusive.
Input
The input is given from Standard Input in the following format:

X
Output
Output the answer.

Sample Input 1
Copy
5
Sample Output 1
Copy
HellWorld
Deleting the 
5-th character of HelloWorld gives HellWorld. Thus, output HellWorld.

Sample Input 2
Copy
9
Sample Output 2
Copy
HelloWord
Sample Input 3
Copy
1
Sample Output 3
Copy
elloWorld

*/


#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s="HelloWorld";
  for(int i=0;i<s.size();i++){
    if(i==n-1){
      continue;
    }
    cout<<s[i];
  }
  return 0;
  
}