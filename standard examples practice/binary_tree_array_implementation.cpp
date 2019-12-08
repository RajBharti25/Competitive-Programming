#include <iostream>
using namespace std;
char tree[10];
int n=10;
void root(char A)
{
    if(tree[0] !='\0')
        cout<<"tree already has a root";
    else {
            tree[0]=A;
            cout<<"root is set as A";
         }
}
void set_right(char A,int p)
{
    if(tree[2*p+2] != '\0')
        cout<<"can't set right " <<A<<" as right child to "<<p;
    else
    {
        tree[2*p+2]=A;
        cout<<endl<<A<<" is set as right child of "<<p;
    }
}
void set_left(char A,int p)
{
    if(tree[2*p+1] != '\0')
        cout<<"can't set right " <<A<<" as left child to "<< p;
    else
    {
        tree[2*p+1]=A;
        cout<<endl<<A<<" is set as left child of "<<p;
    }
}
void print_tree()
{
    cout<<endl;
    cout<<"Given Binary tree is as: ";
    for(int i=0;i<n;++i)
    {
        if(tree[i] =='\0')
            cout<<"-";
        else
            cout<<tree[i];
        
    }
}

int main() 
{ 
    
    root('A'); 
    //insert_left('B',0); 
    set_right('C', 0); 
    set_left('D', 1); 
    set_right('E', 1); 
    set_right('F', 2); 
    print_tree(); 
    return 0; 
} 