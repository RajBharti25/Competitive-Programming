// this example create a linked list and also print them 
// it describes how to create a linked list and trasverse it
#include<iostream>
using namespace std;

// create a class for linked list 
class Node {
public:
	int data;
	Node* next;
};

void print_list(Node* n)
{
	while(n != NULL)
	{
		cout<<n->data<<endl;
		n=n->next;
	}
}

int main()
{
	Node* head=NULL;
	Node* second=NULL;
	Node* third=NULL;
    // Allocating three nodes
    head=new Node();
    second = new Node();
    third = new Node();

   head->data=1;
   head->next=second;
   second->data=2;
   second->next=third;
   third->data=3;
   third->next=NULL;
   cout<<"element of the lists are as follow"<<endl;
   print_list(head);
}
