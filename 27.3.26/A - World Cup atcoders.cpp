/*
A sport event is held in June of every year whose remainder when divided by 
4 is 
2.
Suppose that it is now January of the year 
Y. In what year will this sport event be held next time?

Constraints
2000≤Y≤3000
Y is an integer.
Input
Input is given from Standard Input in the following format:

Y
Output
Print the answer.

Sample Input 1
Copy
2022
Sample Output 1
Copy
2022
The remainder when 
2022 is divided by 
4 is 
2, so if it is now January of 
2022, the next games will be held in June of the same year.

Sample Input 2
Copy
2023
Sample Output 2
Copy
2026
Sample Input 3
Copy
3000
Sample Output 3
Copy
3002
*/

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int x=n%4;
  if(x==2)
  {
    cout<<n;
  }
   else if(x==0)
    {
      cout<<n+2;
    }
    else if(x==1)
    {
      cout<<n+1;
    }
    else if(x==3)
    {
      cout<<n+3;
    }
  
  return 0;
}