
/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included. Write a program to find Nth Ugly Number.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. For each testcase there is one line of input that contains the number N.

Output:
Print the Nth Ugly Number.

Constraints:
1 ≤ T ≤ 104
1 ≤ N ≤ 104

Example:
Input:
2
10
4
Output:
12
4

initialize
   ugly[] =  | 1 |
   i2 =  i3 = i5 = 0;

First iteration
   ugly[1] = Min(ugly[i2]*2, ugly[i3]*3, ugly[i5]*5)
            = Min(2, 3, 5)
            = 2
   ugly[] =  | 1 | 2 |
   i2 = 1,  i3 = i5 = 0  (i2 got incremented ) 

Second iteration
    ugly[2] = Min(ugly[i2]*2, ugly[i3]*3, ugly[i5]*5)
             = Min(4, 3, 5)
             = 3
    ugly[] =  | 1 | 2 | 3 |
    i2 = 1,  i3 =  1, i5 = 0  (i3 got incremented ) 

Third iteration
    ugly[3] = Min(ugly[i2]*2, ugly[i3]*3, ugly[i5]*5)
             = Min(4, 6, 5)
             = 4
    ugly[] =  | 1 | 2 | 3 |  4 |
    i2 = 2,  i3 =  1, i5 = 0  (i2 got incremented )

Fourth iteration
    ugly[4] = Min(ugly[i2]*2, ugly[i3]*3, ugly[i5]*5)
              = Min(6, 6, 5)
              = 5
    ugly[] =  | 1 | 2 | 3 |  4 | 5 |
    i2 = 2,  i3 =  1, i5 = 1  (i5 got incremented )

Fifth iteration
    ugly[4] = Min(ugly[i2]*2, ugly[i3]*3, ugly[i5]*5)
              = Min(6, 6, 10)
              = 6
    ugly[] =  | 1 | 2 | 3 |  4 | 5 | 6 |
    i2 = 3,  i3 =  2, i5 = 1  (i2 and i3 got incremented )

Will continue same way till I < 150
*/





// C++ program to find n'th Ugly number 
# include<bits/stdc++.h> 
using namespace std; 
  
/* Function to get the nth ugly number*/
unsigned getNthUglyNo(unsigned n) 
{ 
    unsigned ugly[n]; // To store ugly numbers 
    unsigned i2 = 0, i3 = 0, i5 = 0; 
    unsigned next_multiple_of_2 = 2; 
    unsigned next_multiple_of_3 = 3; 
    unsigned next_multiple_of_5 = 5; 
    unsigned next_ugly_no = 1; 
  
    ugly[0] = 1; 
    for (int i=1; i<n; i++) 
    { 
       next_ugly_no = min(next_multiple_of_2, 
                           min(next_multiple_of_3, 
                               next_multiple_of_5)); 
       ugly[i] = next_ugly_no; 
       if (next_ugly_no == next_multiple_of_2) 
       { 
           i2 = i2+1; 
           next_multiple_of_2 = ugly[i2]*2; 
       } 
       if (next_ugly_no == next_multiple_of_3) 
       { 
           i3 = i3+1; 
           next_multiple_of_3 = ugly[i3]*3; 
       } 
       if (next_ugly_no == next_multiple_of_5) 
       { 
           i5 = i5+1; 
           next_multiple_of_5 = ugly[i5]*5; 
       } 
    } /*End of for loop (i=1; i<n; i++) */
    return next_ugly_no; 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int n = 150; 
    cout << getNthUglyNo(n); 
    return 0; 
} 
