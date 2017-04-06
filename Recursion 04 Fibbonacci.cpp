#include<iostream>
#include<string>
using namespace std;

int fibonacci(int fibNumPosPar);

int main()
{
	int userNum;
	cout << "How many Fibonacci numbers do you want to display: ";
	cin >> userNum;

	for (int i = 0; i < userNum; i++)
	{
		cout << fibonacci(i) << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

int fibonacci(int fibNumPosPar)
{
	if (fibNumPosPar == 0)//The First Fibonacci Number
	{
		return 0;
	}
	else if (fibNumPosPar == 1)//The Second Fibonacci Number
	{
		return 1;
	}
	else
	{
		return fibonacci(fibNumPosPar - 1) + fibonacci(fibNumPosPar - 2);
	}
}