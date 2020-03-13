/*
Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. If all the nodes in the linked list are equal, then remove n-1 nodes.

Input:
First line of input contains number of testcases T. For each testcases, first line of input contains number of nodes in the linked list, and next line contains node data for N nodes.

Output:
For each testcase, print the linked list with no repeating elements.

User Task:
You have to complete the method removeDuplicates() which takes 1 argument: the head of the  linked list  .You should not read any input from stdin/console. Your function should return a pointer to a linked list with no duplicate element.

Constraints:
1 <= T <= 1000
1 <= size of linked lists <= 1000
1 <= numbers in list <= 104

Example:
Input:
2
4
5 2 2 4
5
2 2 2 2 2

Output:
5 2 4
2

Explanation:
Testcase 1: Given linked list elements are 5->2->2->4, in which 2 is repeated only. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain 5->2->4.
Testcase 2: Given linked list elements are 2->2->2->2->2, in which 2 is repeated. So, we will delete the extra repeated elements 2 from the linked list and the resultant linked list will contain only 2.
*/


Node * removeDuplicates( Node *head) 
{
 // your code goes here
 set<int>s;
 Node* prev=head;
 Node* head1=head;
 s.insert(head->data);
 head=head->next;
 
 while(head !=nullptr)
 {
     if(s.find(head->data) ==s.end())
     {
         s.insert(head->data);
         prev=head;
         head=head->next;
     }
     else
     {
         prev->next=head->next;
         head=head->next;
         
     }
 }
 return head1;
}
