/*
There is a programming contest with 
N problems. For each 
i=1,2,…,N, the score for the 
i-th problem is 
S 
i
​
 .

Print the total score for all problems with a score of 
X or less.

Constraints
All input values are integers.
4≤N≤8
100≤S 
i
​
 ≤675
100≤X≤675
Input
The input is given from Standard Input in the following format:

N 
X
S 
1
​
  
S 
2
​
  
… 
S 
N
​
 
Output
Print the answer.

Sample Input 1
Copy
6 200
100 675 201 200 199 328
Sample Output 1
Copy
499
Three problems have a score of 
200 or less: the first, fourth, and fifth, for a total score of 
S 
1
​
 +S 
4
​
 +S 
5
​
 =100+200+199=499.

Sample Input 2
Copy
8 675
675 675 675 675 675 675 675 675
Sample Output 2
Copy
5400
Sample Input 3
Copy
8 674
675 675 675 675 675 675 675 675
Sample Output 3
Copy
0

*/


#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,a;
  cin>>n>>a;
  int sum=0;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<=a){
      sum+=arr[i];
    }
  }
  cout<<sum;
  return 0;
  
}