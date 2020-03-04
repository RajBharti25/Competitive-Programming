/*
Count number of ways to partition a set into k subsets
Given two numbers n and k where n represents number of elements in a set, find number of ways to partition the set into k subsets.

Example:

Input: n = 3, k = 2
Output: 3
Explanation: Let the set be {1, 2, 3}, we can partition
             it into 2 subsets in following ways
             {{1,2}, {3}},  {{1}, {2,3}},  {{1,3}, {2}}  

Input: n = 3, k = 1
Output: 1
Explanation: There is only one way {{1, 2, 3}}
We strongly recommend you to minimize your browser and try this yourself first.



Let S(n, k) be total number of partitions of n elements into k sets. Value of S(n, k) can be defined recursively as,

S(n, k) = k*S(n-1, k) + S(n-1, k-1) 
S(n, k) is called Stirling numbers of the second kind


How does above recursive formula work?
When we add a (n+1)’th element to k partitions, there are two possibilities.
1) It is added as a single element set to existing partitions, i.e, S(n, k-1)
2) It is added to all sets of every partition, i.e., k*S(n, k)

Therefore S(n+1, k) = k*S(n, k) + S(n, k-1) which means S(n, k) = k*S(n-1, k) + S(n-1, k-1)

Below is recursive solution based on above formula.

*/

#include<bits/stdc++.h>
using namespace std;
int countP(int n,int k)
{
    int dp[n+1][k+1];
    int i,j;
    for(i=0;i<=n;i++)
      dp[i][0]=0;
    for(j=0;j<=k;j++)
      dp[0][j]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(i==j ||j==1)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=j*countP(i-1,j)+countP(i,j-1);
            }
        }
    }
    return dp[n][k];
}
int main()
{
    int n=5,k=2;
    cout<<"countP:"<<countP(n,k);
    return 0;
}
