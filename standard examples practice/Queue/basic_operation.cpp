/*
You are given an array A of size N. You need to enqueue the elements of the array into a queue and then print them while dequeue .

Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line of input contains size of array N. The second line of array contains the elements of array separated by spaces.

Output Format:
For each testcase, in a new line, print the required output.

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the provided functions

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
1 2 3 4 5
1 6 43 1 2 0 5
*/

//User function Template for C++

queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> q;
   for(int i=0;i<n;i++)
   {
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
} 
