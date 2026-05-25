/*
You are given 
N strings 
S 
1
​
 ,S 
2
​
 ,…,S 
N
​
  in this order.

Print 
S 
N
​
 ,S 
N−1
​
 ,…,S 
1
​
  in this order.

Constraints
1≤N≤10
N is an integer.
S 
i
​
  is a string of length between 
1 and 
10, inclusive, consisting of lowercase English letters, uppercase English letters, and digits.
Input
The input is given from Standard Input in the following format:

N
S 
1
​
 
S 
2
​
 
⋮
S 
N
​
 
Output
Print 
N lines. The 
i-th 
(1≤i≤N) line should contain 
S 
N+1−i
​
 .

Sample Input 1
Copy
3
Takahashi
Aoki
Snuke
Sample Output 1
Copy
Snuke
Aoki
Takahashi
We have 
N=3, 
S 
1
​
 = Takahashi, 
S 
2
​
 = Aoki, and 
S 
3
​
 = Snuke.

Thus, you should print Snuke, Aoki, and Takahashi in this order.

Sample Input 2
Copy
4
2023
Year
New
Happy
Sample Output 2
Copy
Happy
New
Year
2023
The given strings may contain digits.
*/


#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<string>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=n-1;i>=0;i--){
    cout<<a[i]<<endl;
  }
  return 0;
}