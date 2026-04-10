/*
Greg has an array a = a1, a2, ..., an and m operations. Each operation looks as: li, ri, di, (1 ≤ li ≤ ri ≤ n). To apply operation i to the array means to increase all array elements with numbers li, li + 1, ..., ri by value di.

Greg wrote down k queries on a piece of paper. Each query has the following form: xi, yi, (1 ≤ xi ≤ yi ≤ m). That means that one should apply operations with numbers xi, xi + 1, ..., yi to the array.

Now Greg is wondering, what the array a will be after all the queries are executed. Help Greg.

Input
The first line contains integers n, m, k (1 ≤ n, m, k ≤ 105). The second line contains n integers: a1, a2, ..., an (0 ≤ ai ≤ 105) — the initial array.

Next m lines contain operations, the operation number i is written as three integers: li, ri, di, (1 ≤ li ≤ ri ≤ n), (0 ≤ di ≤ 105).

Next k lines contain the queries, the query number i is written as two integers: xi, yi, (1 ≤ xi ≤ yi ≤ m).

The numbers in the lines are separated by single spaces.

Output
On a single line print n integers a1, a2, ..., an — the array after executing all the queries. Separate the printed numbers by spaces.

Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams of the %I64d specifier.

Examples
InputCopy
3 3 3
1 2 3
1 2 1
1 3 2
2 3 4
1 2
1 3
2 3
OutputCopy
9 18 17
InputCopy
1 1 1
1
1 1 1
1 1
OutputCopy
2
InputCopy
4 3 6
1 2 3 4
1 2 1
2 3 2
3 4 4
1 2
1 3
2 3
1 2
1 3
2 3
OutputCopy
5 18 31 20

*/

import java.util.*;

public class main{
public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int N=sc.nextInt();
	int M=sc.nextInt();
	int Q=sc.nextInt();
	
	int[] arr=new int[N+1];
	for(int i=1;i<=N;i++)
	{
		 arr[i] = sc.nextInt();
	}
	
	int[][] opp=new int[M+1][3];
	
	for(int i=1;i<=M;i++){
	opp[i][0]=sc.nextInt();	
	opp[i][1]=sc.nextInt();
    opp[i][2]=sc.nextInt();
	}
	int[] odp=new int[M+2];
	
	while(Q-->0){
		int st=sc.nextInt();
     	int ed=sc.nextInt();
     	
     	odp[st]+=1;
     	odp[ed+1]-=1;
	}
	for(int i=1;i<=M;i++){
		odp[i] += odp[i-1];
	}
	
	long[] dp=new long[N+2];
	
	for(int opi=1;opi<=M;opi++){
		int ost = opp[opi][0];
		int oed = opp[opi][1];
		int oval = opp[opi][2];
		
		dp[ost] += (1L*oval*odp[opi]);
	    dp[oed+1] -= (1L*oval*odp[opi]);
	
	}
	
	for(int i=1;i<=N;i++)
	{
		dp[i]=dp[i-1]+dp[i];
	}
	for(int i=1;i<=N;i++)
	{
		System.out.print(arr[i]+dp[i]+" ");
	}
}

}
