/*
You are given an array A of size N. You need to push the elements of the array into a stack and then print them while popping.

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line of input contains size of array N. The second line of array contains the elements of array separated by spaces.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided functions _push() and _pop().

Constraints:
1 <= T <= 100
1 <= Ai <= 107

Examples:
Input:
2
5
1 2 3 4 5
7
1 6 43 1 2 0 5
Output:
5 4 3 2 1
5 0 2 1 43 6 1
*/


stack<int>_push(int arr[],int n)
{
   //return a stack with all elements of arr inserted in it
   stack<int> s;
   for(int i=0;i<n;i++)
   {
       s.push(arr[i]);
   }
   return s;
}

/* _pop function to print elements of the stack
   remove as well
*/
void _pop(stack<int>s)
{
    //print top and pop for each element until it becomes empty
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
