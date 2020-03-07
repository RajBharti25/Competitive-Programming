/*

Given a Matrix mat of N*N size, the task is to complete the function constructLinkedMatrix(), that constructs a 2D linked list representation of the given matrix.

Input : 2D matrix 
1 2 3
4 5 6
7 8 9

Output :
1 -> 2 -> 3 -> NULL
|    |    |
v    v    v
4 -> 5 -> 6 -> NULL
|    |    |
v    v    v
7 -> 8 -> 9 -> NULL
|    |    |
v    v    v
NULL NULL NULL
Input:
The fuction takes 2 argument as input, first the 2D matrix mat[][] and second an integer variable N, denoting the size of the matrix.
There will be T test cases and for each test case the function will be called separately.

Output:
The function must return the reference pointer to the head of the linked list.

Constraints:
1<=T<=100
1<=N<=150

Example:
Input:
2
3
1 2 3 4 5 6 7 8 9
2
1 2 3 4
Output:
1 2 3 4 5 6 7 8 9
1 2 3 4

*/

Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    Node *head=new Node(mat[0][0]); 
    
    Node *temp1,*rstart;
    temp1=head;
    
    for(int i=0;i<n-1;i++)
    {
        
        for(int j=0;j<n-1;j++)
        {
            Node *temp2=new Node(mat[i][j+1]);
           Node *temp3=new Node(mat[i+1][j]);
            if(j==0)
            rstart=temp3;
            
            
            
            temp1->right=temp2;
            
            temp1->down=temp3;
            temp1=temp1->right;
           
        }
       
      
           temp1=rstart;
           
      
        
    }
     for(int j=0;j<n-1;j++)
     {
         Node *temp2=new Node(mat[n-1][j+1]);
         temp1->right=temp2;
         temp1=temp1->right;
     }
   
    return head;
    
}
