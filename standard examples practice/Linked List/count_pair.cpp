/*
Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X.

Input:
The function takes three arguments as input, reference pointer to the head of the two linked list (head1 and head2), and an variable X.
There will be T test cases and for each test case the function will be called separately.
Note : All elements in a linked list are unique.

Output:
For each test case the function should return the count of all the pairs from both lists whose sum is equal to the given value X. 

Constraints:
1<=T<=100
1<=N1,N2<=10000
1<=X<=10000

Example:
Input:
2
6
1 2 3 4 5 6
3
11 12 13
15
4
7 5 1 3
4
3 5 2 8
10

Output:
3
2

*/

// your task is to complete this function
int countPairs(struct Node* head1, struct Node* head2, int x) {
    // Code here
    int count =0;
    set<int> s;
    for(Node* temp=head1;temp!=nullptr;temp=temp->next)
        {
           s.insert(temp->data) ;
        }
    for(Node* temp1=head2;temp1!=nullptr;temp1=temp1->next)
    {
        if(s.find(x-temp1->data) !=s.end())
            count=count+1;
    }
    return count;
}
