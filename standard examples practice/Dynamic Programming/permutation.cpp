/*
Permutation Coefficient
Permutation refers to the process of arranging all the members of a given set to form a sequence. The number of permutations on a set of n elements is given by n! , where “!” represents factorial.
The Permutation Coefficient represented by P(n, k) is used to represent the number of ways to obtain an ordered subset having k elements from a set of n elements.
n(P)r =n-1(P)r +r*(n-1(P)r-1)
Mathematically it’s given as:
permu

*/

#include<bits/stdc++.h>
using namespace std;

int permutation(int n,int r)
{
    int dp[n+1][r+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            // Base Cases 
            if (j == 0) 
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j] +  
                          (j * dp[i - 1][j - 1]); 
  
            dp[i][j+1]=0;
        }
    }
    return dp[n][r];
}
int main()
{
    int n=10,r=2;
    cout<<"n(dp)r:"<<permutation(n,r);
    return 0;
}
