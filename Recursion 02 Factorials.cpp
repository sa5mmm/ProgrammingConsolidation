#include<iostream>
using namespace std;

long int fact(long int numPar);
int main()
{
	int userNum;
	cout << "What do you want to find the factorial of: ";
	cin >> userNum;

	cout << userNum << "!= " << fact(userNum) << endl;

	system("pause");
	return 0;
}

long int fact(long int numPar)
{
	if (numPar == 0)//base Case
	{
		return 1;
	}
	else//n! = n*(n-1)!
	{
		return numPar * fact(numPar - 1);
	}
}