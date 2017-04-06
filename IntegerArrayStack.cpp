#include"IntegerArrayStack.h"
#include<iostream>
#include<cassert>
using namespace std;

IntegerArrayStack::IntegerArrayStack()
{
	top = -1;
}

bool IntegerArrayStack::isEmpty() const
{
	return top < 0;
}

void IntegerArrayStack::push(const int& newEntry)
{
	if (top < (MAXSTACK - 1))//Does the stack have room for a new entry?
	{
		top++;
		items[top] = newEntry;
	}
}
int IntegerArrayStack::pop()
{
	int poppedItem = 0;

	if (!isEmpty())//If the stack is not empty
	{
		poppedItem = items[top];
		top--;
		return poppedItem;
	}
	else
	{
		cout << "Stack is empty, cannot pop";
	}
	return -1;
}
int IntegerArrayStack::peek() const
{
	assert(!isEmpty());//Enforce precondition DO NOT DO only for testing, Deal with problem!
	return items[top];
}
void IntegerArrayStack::display()
{
	if (top < 0)
	{
		cout << "No elements to display." << endl;
	}
	else
	{
		for (int i = 0; i <= top; i++)
		{
			cout << items[i] << " ";
		}
	}
	cout << endl;
}