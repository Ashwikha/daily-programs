/*
Takahashi's cake has been eaten by someone. There are three suspects: person 
1, person 
2, and person 
3.

There are two witnesses, Ringo and Snuke. Ringo remembers that person 
A is not the culprit, and Snuke remembers that person 
B is not the culprit.

Determine if the culprit can be uniquely identified based on the memories of the two witnesses. If the culprit can be identified, print the person's number.

Constraints
1≤A,B≤3
All input values are integers.
Input
The input is given from Standard Input in the following format:

A 
B
Output
If the culprit can be uniquely identified based on the memories of the two witnesses, print the person's number; otherwise, print -1.

Sample Input 1
Copy
1 2
Sample Output 1
Copy
3
From the memories of the two witnesses, it can be determined that person 
3 is the culprit.

Sample Input 2
Copy
1 1
Sample Output 2
Copy
-1
From the memories of the two witnesses, it cannot be determined whether person 
2 or person 
3 is the culprit. Therefore, print -1.

Sample Input 3
Copy
3 1
Sample Output 3
Copy
2
*/


#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a==b)
  {
    cout<<"-1";
  }
  else if(a+b==3)
  {
    cout<<3;
  }
  else if(a+b==4)
  {
    cout<<2;
  }
  else if(a+b==5)
  {
    cout<<1;
  }
  return 0;
}