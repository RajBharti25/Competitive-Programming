/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.

Input:
The first line contains an integer 'T' denoting the total number of test cases. T test-cases follow. In each test cases, the first line contains an integer 'N' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array. The elements of the array represents the height of the bars.

Output:
For each test-case, in a separate line, the maximum rectangular area possible from the contiguous bars.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= A[i] <= 1018

Example:
Input: 
2
7
6 2 5 4 5 1 6
4
6 3 4 2
Output:
12
9

Explanation:
Testcase1:

*/
http://d1hyf4ir1gqw6c.cloudfront.net/wp-content/uploads/histogram1.png
#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;cin>>t;
     
     while(t--)
	{
	    
	    long long int n;cin>>n;
	    long long int max_area=0,area_with_top=0,hist[n],tp=0;
	    stack<long long int>s;
	    for(long long int i=0;i<n;i++){cin>>hist[i];}
	    int long long i=0;
	    while(i<n)
	    {
	        if (s.empty() || hist[s.top()] <= hist[i]) 
            s.push(i++); 
	        else
            { 
                tp = s.top();  // store the top index 
                s.pop();  // pop the top 
      
                // Calculate the area with hist[tp] stack  
                // as smallest bar 
                area_with_top = hist[tp] * (s.empty() ? i :  
                                       i - s.top() - 1); 
      
                // update max area, if needed 
                if (max_area < area_with_top) 
                    max_area = area_with_top; 
            } 
	    }
	    
	    while (s.empty() == false) 
        { 
            tp = s.top(); 
            s.pop(); 
            area_with_top = hist[tp] * (s.empty() ? i :  
                                    i - s.top() - 1); 
      
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
	    cout<<max_area<<endl;
	    
	    
	}
	
	return 0;
}
