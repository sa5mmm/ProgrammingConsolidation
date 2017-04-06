/*Use Recursion to determine the sum of numbers from a given number to one.
We are going to assume that the user will enter a number greater than or equal to 1.
*/

#include<iostream>
using namespace std;
const char SIGMA = 228;
int runningSum(int addenPar);
int main()
{
	int userNum;
	cout << "What do you want to find the running sum of: ";
	cin >> userNum;

	cout << userNum << SIGMA << runningSum(userNum) << endl;

	system("pause");
	return 0;
}

int runningSum(int addenPar)
{
	if (addenPar == 1)//Base Case
	{
		return 1;
	}
	else
	{
		return addenPar + runningSum(addenPar - 1);
	}
}