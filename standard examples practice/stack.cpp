#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

//creating a class named Stack
class Stack 
{
	int top;
public:
	int arr[MAX];
	Stack(){ top=-1;}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};
bool Stack::push(int x)
{
	if(top>=MAX-1)
	{
		cout<<"\nStack Overflow";
		cout<<"\n"<<MAX;
		return false;
	}
	arr[++top]=x;
	return true;
}
int Stack::pop()
{
	if(top<0)
	{
		cout<<"Stack Underflow\n";
		return 0;
	}
	else
	{
		int x=arr[top--];
		return x;
	}
}
int Stack::peek()
{
	if(top<0)
	{
		return 0;
	}
	int x=arr[top];
	return x;
}
bool Stack::isEmpty()
{
	return(top<0);
}

int main()
{
	class Stack s;
	s.push(30);
	s.push(50);
	cout<<s.pop()<<" is poped from the stack\n";
	return 0;
}