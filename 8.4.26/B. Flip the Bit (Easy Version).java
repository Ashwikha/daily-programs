/*
This is the easy version of the problem. The difference between the versions is that in this version, there is exactly one special index (k=1
). You can hack only if you solved all versions of this problem.

You are given a binary array a
 of length n
 and k
 special indices p1,p2,…,pk
 (1≤pi≤n
). It is given that the values ai
 of all elements at special indices are the same (i. e., ap1=ap2=…=apk
).

In one operation, you can choose a range [l,r]
 (1≤l≤r≤n
) such that the range contains at least one special index (l≤pi≤r
) and flip all bits aj
 for l≤j≤r
. Flipping a bit changes 0
 to 1
 and 1
 to 0
.

Let x
 denote the value at special indices before any operations are applied. Find the minimum number of operations required to make all elements of the array equal to x
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (1≤n≤2⋅105
; k=1
) — the length of the array and the number of special indices.

The second line contains n
 integers a1,a2,…,an
 (0≤ai≤1
) — the elements of the array.

The third line contains k
 integers p1,p2,…,pk
 (1≤p1<p2<…<pk≤n
) — the special indices. It is guaranteed that ap1=ap2=…=apk
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the minimum number of operations required.

Example
InputCopy
4
3 1
0 1 0
2
5 1
1 1 1 1 1
1
6 1
0 1 0 1 0 1
3
17 1
0 1 1 0 1 1 0 1 0 0 1 0 1 0 1 0 1
5
OutputCopy
2
0
4
10
Note
For the first test case, you can choose the range [1,3]
 and flip all the bits to get [1,0,1]
. Then you can choose the range [2,2]
 and flip the second bit to get [1,1,1]
.

For the second test case, all the bits already match the value at the special index. You do not need any operations.


*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

    int T=sc.nextInt();
    while(T-->0){
    	int N=sc.nextInt();
    	int K=sc.nextInt();
    	int[] arr=new int[N+2];
    	for(int idx=1;idx<=N;idx++){
    		arr[idx]=sc.nextInt();
		}
		int spi=sc.nextInt();
		int[] dp=new int[N+2];
		arr[0]=arr[N+1]=arr[spi];
			for(int idx=1;idx<spi;idx++){
    		dp[idx]=dp[idx-1]+(arr[idx]==arr[idx-1]?0:1);
       }
       for(int idx=N;idx>spi;idx--){
       	dp[idx]=dp[idx+1]+(arr[idx]==arr[idx+1]?0:1);
	   }
       dp[spi]=Math.max(dp[spi-1],dp[spi+1]);
       if(dp[spi+1]>=dp[spi-1]  &&  arr[spi]!=arr[spi+1]){
       	dp[spi]++;
	   }
	   else if(dp[spi-1]>=dp[spi+1]  &&  arr[spi]!=arr[spi-1])
      {
       	dp[spi]++;
	   }
	   System.out.println(dp[spi]);
	}
}
}

	
	