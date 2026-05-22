/*
There are 
N bridges in AtCoder Village. The height of the bridge numbered 
i is 
H 
i
​
  (
i is an integer between 
1 and 
N).
Every two different bridges in the village have different heights.

Print the number representing the highest bridge in the village.

Constraints
1≤N≤100
1≤H 
i
​
 ≤10 
9
 
All 
H 
i
​
  are different.
All values in the input are integers.
Input
The input is given from Standard Input in the following format:

N
H 
1
​
  
H 
2
​
  
… 
H 
N
​
 
Output
Print the integer representing the highest bridge in AtCoder village.

Sample Input 1
Copy
3
50 80 70
Sample Output 1
Copy
2
The village has three bridges.
The first, second, and third bridges have heights of 
50, 
80, and 
70, respectively, so the second bridge is the highest.
Thus, 
2 should be printed.

Sample Input 2
Copy
1
1000000000
Sample Output 2
Copy
1
The village has only one bridge, so the first bridge is the highest.

Sample Input 3
Copy
10
22 75 26 45 72 81 47 29 97 2
Sample Output 3
Copy
9
The village has ten bridges, and the ninth bridge (with a height of 
97) is the highest.


*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  cin>>a[0];
  int maxi=a[0];
  for(int i=1;i<n;i++){
    cin>>a[i];
    maxi=max(a[i],maxi);
  }
  for(int i=0;i<n;i++){
    if(a[i]==maxi){
      cout<<i+1;
      return 0;
    }
  }
  return 0;
}