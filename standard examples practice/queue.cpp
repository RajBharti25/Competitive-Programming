//Implementation of QUEUE using LINKED LIST

#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
	int data;
	QueueNode* next;
	QueueNode(int x)
	{
		data =x;
		next=NULL;
	}
};
struct MyQueue
{
	QueueNode* front;
	QueueNode* rear;
	MyQueue()
	{
		front=NULL;
		rear = NULL;
	}
	void push(int x);
	int pop();
};
void MyQueue::push(int x)
{
	QueueNode* temp=new QueueNode(x);
	if(front==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
int MyQueue::pop()
{
	if(front==NULL)
		return -1;
	else if(front==rear)
	{
		int a=front->data;
		front=rear=NULL;
		return a;
	}
	else
	{
		int a =front->data;
		front=front->next;
		return a;
	}
}

int main() 
{ 
    MyQueue q; 
    q.push(1); 
    q.push(2); 
    q.push(3); 
  
    cout << q.pop() << " is poped out from the QUEUE\n"; 
    cout << q.pop() << " is poped out from the QUEUE\n"; 
    cout << q.pop() << " is poped out from the QUEUE\n"; 
  
    return 0; 
} 
