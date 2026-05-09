/*
You are given a sequence 
A=(A 
1
​
 ,A 
2
​
 ,⋯,A 
N
​
 ) of length 
N.

After that, an integer 
X between 
1 and 
N, inclusive, is given.

Output the value of 
A 
X
​
 .

Constraints
1≤X≤N≤100
1≤A 
i
​
 ≤100
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
A 
1
​
  
A 
2
​
  
… 
A 
N
​
 
X
Output
Output the value of 
A 
X
​
 .

Sample Input 1
Copy
5
1 2 3 4 5
3
Sample Output 1
Copy
3
We have 
(A 
1
​
 ,A 
2
​
 ,A 
3
​
 ,A 
4
​
 ,A 
5
​
 )=(1,2,3,4,5). Since 
A 
3
​
 =3, output 
3.

Sample Input 2
Copy
10
6 6 9 6 10 5 7 2 8 2
4
Sample Output 2
Copy
6
Sample Input 3
Copy
10
4 4 4 3 4 2 1 1 2 1
10
Sample Output 3
Copy
1
*/



#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int a;
  cin>>a;
   if(a>=1 && a<=n){
     cout<<arr[a-1];
   }
     
  
 return 0;
}