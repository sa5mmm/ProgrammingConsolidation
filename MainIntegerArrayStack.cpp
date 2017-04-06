#include<iostream>
#include"IntegerArrayStack.h"
#include<string>
using namespace std;

int main()
{
	bool resume = true;
	IntegerArrayStack* stackPtr = new IntegerArrayStack;
	string input = "";
	int userNum;
	while (resume)
	{
		cout << "Stack operations using arrays" << endl;
		cout << "1 - Push" << endl;
		cout << "2 - Pop" << endl;
		cout << "3 - Peek" << endl;
		cout << "4 - Display" << endl;
		cout << "----------------------" << endl;
		cout << "Enter your choice: ";
		cin >> userNum;

		switch (userNum)
		{
		case 1:
			cout << "Integer item to be pushed: ";
			cin >> userNum;
			stackPtr->push(userNum);
			break;
		case 2:
			cout << "Integer item popped: ";
			stackPtr->pop();
			break;
		case 3:
			cout << "Integer item viewed:\n ";
			stackPtr->peek();
			break;
		case 4:
			cout << "Contents of the stack: \n";
			stackPtr->display();
			break;
		default:
			break;
		}

		cout << "Do you want to continue: (Y/N) ";
		cin >> input;
		if (input == "N" || input == "n")
		{
			resume = false;
		}
		else
		{
			system("cls");
			
		}

	}

	system("pause");
	return 0;
}