/*
Binomial Coefficient | DP-9
Following are common definition of Binomial Coefficients.

A binomial coefficient C(n, k) can be defined as the coefficient of X^k in the expansion of (1 + X)^n.
A binomial coefficient C(n, k) also gives the number of ways, disregarding order, that k objects can be chosen from among n objects; more formally, the number of k-element subsets (or k-combinations) of an n-element set.
The Problem
Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2.

Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
1) Optimal Substructure
The value of C(n, k) can be recursively calculated using following standard formula for Binomial Coefficients.



   C(n, k) = C(n-1, k-1) + C(n-1, k)
   C(n, 0) = C(n, n) = 1
*/

#include<bits/stdc++.h>
using namespace std;
#define p 1000000007
// #define maxr 801
// int dp[maxn][maxr];
int bino(int n,int r)
{
    unsigned long long int dp[n+1][r+1];
    if(r>n)
        return 0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            
            if(j==i || j==0)
            {
                dp[i][j]=1;
                
            }
            else
            {
                dp[i][j]=(dp[i-1][j-1]%p+dp[i-1][j]%p)%p;
            }
        }
    }
    return dp[n][r];
     
}
int main()
 {
	int t;cin>>t;
	while(t--)
	{
	    int n,r;cin>>n>>r;
	    cout<<bino(n,r)<<endl;
	}
	
	return 0;
}
