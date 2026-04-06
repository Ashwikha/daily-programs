#include<iostream>
/*
We call a positive integer a good integer if it satisfies the following condition.

Condition: It can be obtained by choosing one or more powers of 
2 (
1,2,4,8,16,…) (repetition and reordering allowed), concatenating them as strings, and interpreting the result as an integer.
Find the 
N-th smallest good integer. It is guaranteed that the 
N-th smallest good integer is at most 
10 
9
 .

Constraints
N is a positive integer.
The 
N-th smallest good integer is at most 
10 
9
 .
Input
The input is given from Standard Input in the following format:

N
Output
Output the answer.

Sample Input 1
Copy
10
Sample Output 1
Copy
21
Listing good integers in ascending order gives 
1,2,4,8,11,12,14,16,18,21,….

Sample Input 2
Copy
69
Sample Output 2
Copy
328
Sample Input 3
Copy
1099898
Sample Output 3
Copy
819264512
*/

    #include<vector>
    #include<map>
    #include<limits>
    #include<climits>
    #include<string>
    #include <algorithm>
    using namespace std;
    #define ll long long int
    #define MOD 10000000000
     vector<string>tpow;
     vector<ll>gi;
     void dfs(string s){
     	if(s.size()>0)
     	{
          gi.push_back(stoll(s));	
		}
		for(int i=0;i<(int)tpow.size();i++){
			if(s.size()+tpow[i].size()<=9)
			{
				dfs(s+tpow[i]);
			}
		}
	 }
    void solve() {
    	int N;
    	cin>>N;
    	
    	 tpow.clear();
         gi.clear();
    
    	for(ll val=1ll;val<1000000000;val*=2){
    		tpow.push_back(to_string(val));
		}
        dfs("");
		sort(gi.begin(),gi.end());
		gi.erase(unique(gi.begin(),gi.end()),gi.end());
		cout<<gi[N-1]<<endl;	
    }
    	
    	int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    	int T=1;
    	while(T--) solve();
    	return 0;
    }