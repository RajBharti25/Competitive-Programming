/*
Given a gold mine (M) of n*m dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner is at first column but can be at any row. He can move only (right->,right up /,right down\) that is from a given cell, the miner can move to the cell diagonally up towards the right or right or diagonally down towards the right. Your task is to find out maximum amount of gold which he can collect.

Examples:

Input : M[][] = {{1, 3, 3},
                 {2, 1, 4},
                 {0, 6, 4}};
Output : 12 
{(1,0)->(2,1)->(2,2)}

Input: M[][] = {{1, 3, 1, 5},
                {2, 2, 4, 1},
                {5, 0, 2, 3},
                {0, 6, 1, 2}};
Output : 16
(2,0) -> (1,1) -> (1,2) -> (0,3) OR
(2,0) -> (3,1) -> (2,2) -> (2,3)


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer n and m denoting the size of the matrix. Then in the next line are n*m space separated values of the matrix.

Output:
For each test case in a new line print an integer denoting the max gold the miner could collect.

Constraints:
1<=T<=100
1<=n,m<=20
1<=M[][]<=100

Example:
Input:
2
3 3 
1 3 3 2 1 4 0 6 4
2 2
1 2 3 4
Output:
12
7
*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 21

int maxGold(int arr[MAX][MAX],int n,int m)
{
    int dp[MAX][MAX];
    
    for(int i=0;i<n;i++)
    {
        dp[i][m-1]=arr[i][m-1];
        //cout<<dp[i][m-1]<<" ";
    }
    if(n>1)
    {
        for(int j=m-2;j>=0;j--)
        {
          for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    dp[i][j]=arr[i][j]+max(dp[i][j+1], dp[i+1][j+1]);
                }
                else if(i==n-1)
                {
                    dp[i][j]=arr[i][j]+max(dp[i][j+1], dp[i-1][j+1]);
                }
                else
                {
                    dp[i][j]=arr[i][j]+max(dp[i][j+1], max(dp[i+1][j+1], dp[i-1][j+1]));
                }
            }
        }
        
	}
	else
	{
	    int max1=0;
	    for(int j=0;j<m;j++)
	    {
	       max1=max1+dp[0][j];
        }
        return max1;
	}
    int max2=0;
    for(int i=0;i<n;i++)
    {
        if(dp[i][0]>max2)
        {
            max2=dp[i][0];
        }
    
    }
    return max2;
    
}


int main()
 {
	int t;cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[MAX][MAX];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
                cin>>arr[i][j];
                 //cout<<arr[i][j]<<" ";  
	        }
	        //cout<<endl;
	       
	    }
	   // cout<<endl;
	   // cout<<arr[1][0]<<endl;
	   cout<<maxGold(arr,n,m)<<endl;
    }
	
	return 0;
}
