#include<iostream>
using namespace std;


void countDown(int numPar);
int main()
{
	int userNum;
	cout << "Enter a postive integer: ";
	cin >> userNum;

	cout << "\n\nT-MINUS: \n";
	countDown(userNum);

	system("pause");
	return 0;
}

//Recursive Funcion
void countDown(int numPar)
{
	if (numPar == 0) //Base Case
	{
		cout << numPar << endl;
		cout << "BLAST OFF! \n\n";
	}
	else
	{
		cout << numPar << endl;
		countDown(numPar - 1);
	}
}