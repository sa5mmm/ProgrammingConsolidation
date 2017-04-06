#ifndef _INTEGER_ARRAY_STACK
#define _INTEGER_ARRAY_STACK
const int MAXSTACK = 10; //i.e. the maximum stack size
class IntegerArrayStack
{
private:
	int items[MAXSTACK];
	int top; //index to the top of the stack
public:
	IntegerArrayStack();
	bool isEmpty() const; //const makes it a read only function
	void push(const int& newEntry); //Add an entry
	int pop(); //Remove an entry
	int peek() const;
	void display();
};
#endif // !
