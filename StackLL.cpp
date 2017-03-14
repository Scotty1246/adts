#include "StackLL.h"

class Stack::Node
{
	public:
	int data = 0;
	Node* link = nullptr;	
};

Stack::~Stack()
{
	     while(num_elements > 0)
		pop();
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(int val)
{
	Node* newPtr = new Node{val};
	Node* iPtr = frontPtr;

	newPtr -> link =  frontPtr;
	frontPtr = newPtr;
	num_elements ++;
}

void Stack::pop()
{
	Node* delPtr;
	
	delPtr = frontPtr;
	frontPtr = frontPtr -> link;
	
	delete delPtr;
	num_elements --;
}

int Stack::top()
{
	Node* topPtr = frontPtr;
	int topval = topPtr -> data;
	return topval;
}

void Stack::clear()
{
	for(int i = 0; i < size(); i++)
	{
		pop();
	}
}
