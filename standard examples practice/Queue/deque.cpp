/*
A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.

Given a deque and Q queries. The task is to perform some operation on dequeue according to the queries as given below:
1. pb : query to push back the element x (given with query) to deque and print the back.
2. pf : query to push element x(given with query) to the front of the deque and print the front.
3. pp_b : query to delete element from back of the deque and print the size of deque.
4. f : query to return front element from the deque if not empty else return -1.

Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains Q, number of queries. Next Q line contains Q queries.

Your Task:
Your task is to complete the functions push_back_pb(), push_front_pf(), pop_back_ppb() and front_dq()  so that queries can be perfromed as required.

Output Format:
For each testcase, perfrom the required operation on given deque.

Constraints:
1 <= T <= 100
1 <= Q <= 100

Example:
Input:
1
5
pf 5
pf 10
pb 6
f
pp_b

Output:
5
10
6
10
2

Explanation:
Testcase 1: 5 is pushed to front of the queue and printed, 10 is again pushed front of the queue and printed. 6 is pushed back into the queue and printed. Now, front element is 10. Popping back element from the queue, size decreases to 2.
*/

void push_back_pb(deque<int> &dq, int x){
    
    // Your code here
    dq.push_back(x);
    
}

/* Function to pop element from back
* dq : dqueue From which element is to be popped
*/
void pop_back_ppb(deque<int> &dq){
    
    if(!dq.empty())
    /*Your code here*/
    {
        dq.pop_back();
    }
    else
    return;
    
}

/* Function to return element from front
* dq : dqueue from which element is to be returned
*/
int front_dq(deque<int> &dq){
    
if(!dq.empty())
    /*Your code here*/
    return dq.front();
    else
    return -1;
    
}

/* Function to push element to front
* dq : dqueue in which element is to be pushed
* x : element to be pushed
*/
void push_front_pf(deque<int> &dq, int x){
    
    // Your code here
    dq.push_front(x);
    
}
