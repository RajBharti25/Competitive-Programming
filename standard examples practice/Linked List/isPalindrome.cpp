/*
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Input:
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list N and next line contains N integers as data of linked list.

Output:
For each test case output will be 1 if the linked list is a palindrome else 0.

User Task:
The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

Constraints:
1 <= T <= 103
1 <= N <= 50

Example(To be used only for expected output):
Input:
2
3
1 2 1
4
1 2 3 4

Output:
1
0

Explanation:
Testcase 1: 1 2 1, linked list is palindrome.

*/

bool isPalindrome(Node *head)
{
    //Your code here
    stack<int> s;
    int i=0;
    Node* temp=head;
    while(temp!=nullptr)
    {
        s.push(temp->data);
        temp=temp->next;
    }
    int n=s.size();
    temp=head;
    for(int i=0;i<n/2;i++)
    {
        if(s.top()!=temp->data)
            return false;
        s.pop();
        temp=temp->next;
    }
    return true;
}
