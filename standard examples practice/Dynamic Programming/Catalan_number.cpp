/* 
Program for nth Catalan Number
Catalan numbers are a sequence of natural numbers that occurs in many interesting counting problems like following.
1) Count the number of expressions containing n pairs of parentheses which are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).

2) Count the number of possible Binary Search Trees with n keys (See this)



3) Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.

See this for more applications.

The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution.
Recursive Solution
Catalan numbers satisfy the following recursive formula.
C_0=1 \ and \ C_n_+_1=\sum_{i=0}^{n}C_iC_n_-_i \ for \ n\geq 0;



Given a number N. The task is to find the nth catalan number.
The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, …

Input:
First line of input contains a single integer T which denotes the number of test cases. First line of each test case contains a single integer N.

Output:
For each test case, in a new line print the catalan number at position N.
Note: Positions start from 0 as shown above.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
3
5
4
10

Output:
42
14
16796

*/

#include<bits/stdc++.h>
using namespace std;
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 
#define max 102
cpp_int c[max];

 void initialize()
 {
     for(int i=0;i<=max;i++)
     {
         c[i]=-1;
     }
 }
 
 cpp_int catalan(int n)
 {
     if(c[n]==-1)
     {
         if(n==0)
         {
             c[n]=1;
         }
         else
         {
             cpp_int m=0;
             for(int i=0;i<=n-1;i++)
             {
                 m =m+catalan(i)*catalan(n-i-1);
                 //cout<<"m:"<<m;
             }
             c[n]=m;
         }
     }
     return c[n];
 }
 
int main()
 {
	int t;cin>>t;
	initialize();
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<catalan(n)<<endl;
	}
	
	return 0;
}
