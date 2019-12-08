//binary tree implementation using linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* parent;
	node* left;
	node* right;
	node(int data,node* parent,node* left,node* right)
	{
		this->data=data;
		this->parent= parent;
		this->left=left;
		this->right=right;
	}
};

struct bst
{
	node* root;
	bst(node* root)
	{
		this->root=root;
	}
};

int main()
{
	int data1,data2,data3,data4,data5;
	data1=1;data2=2;data3=3;data4=4;data5=5;
	node* root= new node(data1,NULL,NULL,NULL);
	node* node1=new node(data2,NULL,NULL,NULL);
	node* node2=new node(data3,NULL,NULL,NULL);
	node* node3=new node(data4,NULL,NULL,NULL);
	node* node4=new node(data5,NULL,NULL,NULL);
	bst* bst1=new bst(root);
	root->left=node1;
	root->right=node2;
	node1->left=node3;
	node1->right=node4;
	cout<<node1->right->data;

}