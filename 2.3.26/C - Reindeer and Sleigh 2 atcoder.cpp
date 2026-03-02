/*
There are 
N reindeer and one sled. The 
i-th reindeer has weight 
W 
i
​
  and strength 
P 
i
​
 .

For each reindeer, choose either "pull the sled" or "ride on the sled". Here, the total strength of the reindeer pulling the sled must be greater than or equal to the total weight of the reindeer riding on the sled. What is the maximum number of reindeer that can ride on the sled?

You are given 
T test cases. Solve each of them.

Constraints
1≤T≤10 
5
 
1≤N≤3×10 
5
 
1≤W 
i
​
 ,P 
i
​
 ≤10 
9
 
All input values are integers.
The sum of 
N in one input file is at most 
3×10 
5
 .
Input
The input is given from Standard Input in the following format:

T
case 
1
​
 
case 
2
​
 
⋮
case 
T
​
 
Each test case is given in the following format:

N
W 
1
​
  
P 
1
​
 
W 
2
​
  
P 
2
​
 
⋮
W 
N
​
  
P 
N
​
 

Output 
T lines. The 
i-th line should contain the answer for the 
i-th test case.

Sample Input 1

3
3
3 1
4 1
5 9
5
1000000000 1
1000000000 1
1000000000 1
1000000000 1
1000000000 1
10
133180711 458704923
531424946 225863856
141986070 637075158
500770732 289806469
502866767 408857335
559714289 569084545
287444582 992432993
559747907 753133304
432846188 949871298
727072164 756020367
Sample Output 1

2
0
6
For the 1st test case, if the 3rd reindeer pulls the sled and the 1st and 2nd reindeer ride on the sled, the total strength of the reindeer pulling the sled is 
P 
3
​
 =9, and the total weight of the reindeer riding on the sled is 
W 
1
​
 +W 
2
​
 =7, satisfying the condition. Since not all reindeer can ride on the sled, the answer is 
2.
*/


#include<iostream>
#include<vector>
#include<map>
#include<limits>
#include<climits>
#include<string>
#include <algorithm>
using namespace std;
#define ll long long int 

void solve()
{
    int n;
    cin>>n;
    vector<tuple<int,int,int>> rd(n);
    ll remwt=0LL,pullpow=0LL;
    for(int i=0;i<n;i++){
            int w,s;
            cin>>w>>s;
            rd[i]=make_tuple(w+s,s,w);
            remwt+=w;
            }
            
            sort(rd.begin(),rd.end(),greater<>{});
            int ans=n;
            for(int i=0;i<n && pullpow<remwt;i++){
                    ans--;
                    remwt-=get<2>(rd[i]);
                    pullpow+=get<1>(rd[i]);
                    }
                    cout<<ans<<endl;
                    }
                    
                    
                    
int main() { 
    int t;
    cin>>t;
    while(t--) {
    	solve();
    }
    return 0;
}
