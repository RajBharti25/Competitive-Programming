
/*

*/
Given a doubly linked list, rotate the linked list counter-clockwise by P nodes. Here P is a given positive integer and is smaller than the count of nodes(N) in a linked list.

Input:
The first line of input contains an integer T denoting the no of test cases. For each test case, the first line of input contains two integers N and P denoting the number of nodes in Linked List and the number of nodes to be rotated respectively.

Output:
For each test case, output the final linked list after the P rotations in it.

Constraints:
1 <= T <= 100
2 <= N <= 100
1 <= P <= N

Example:
Input:
1
6 2
1 2 3 4 5 6

Output:
3 4 5 6 1 2

Explanation:
Testcase 1: Doubly linked list after rotating 2 nodes is: 3 4 5 6 1 2.
*/

struct node*update(struct node*start,int p)
{
    //Add your code here
    struct node* last;
    struct node* temp;
    temp=start;
    last=start;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    for(int i=0;i<p;i++)
    {
        last->next=temp;
        temp->prev=last;
        last=temp;
        temp=temp->next;
        last->next=NULL;
        temp->prev=NULL;
        
        
    }
       
    return temp;
}
