#include<iostream>
#include<string>
using namespace std;

bool digits[10];
void multiply(int numPar, int itPar);
bool found = false;//It is only true if all digits are found
int casesArray[100];//Hopefully no one choses more than 100 cases.
bool digitsFound();//This tests if our digits array has all true values
void findDigits(int numPar);//This finds the digits in a single number that has been counted and adds seen digits to the digits array.
void multiply(int numPar, int itPar);//This is the "counting" function of N*i, N*i+1, N*i+2 etc.
const int START = 1; //this is the starting i in above. the problem description calls it to start at 1.

int main()
{
	//set up digits array to false
	for (int i = 0; i<10; i++)
	{
		digits[i] = false;//0,1,2,3,4,5,6,7,8,9 all set to false.
	}

	int cases = 0;
	cout << "Enter the number of cases you want to try: ";
		cin >> cases;

	for (int i = 0; i<cases; i++)
	{
		//Need to put some linked list pointer junk in here to handle each number in case of large cases wanted to test.
		//For now I'll just save each number in an array.
		cout << "Starting number to count sheep for case " << i + 1 << ": ";
		cin >> casesArray[i];
	}

	for (int i = 0; i<cases; i++)
	{
		cout << "Case #" << i + 1 << ": ";
		multiply(casesArray[i], START);
	}

	system("pause");
	return 0;
}

void multiply(int numPar, int itPar)
{
	if (numPar == 0)
	{
		//end recursion, will never produce all digits
		//cout << "Insomnia"<<endl;
	}
	else if (found)
	{
		//We found all digits
		cout << numPar*itPar << endl;
	}
	else
	{
		findDigits(numPar);
		found = digitsFound();
		multiply(numPar, itPar + 1);
	}
}

void findDigits(int numPar)
{
	if (numPar == 0)//Not sure if this will work. Hopefully an int of 1/10 = zero. 
	{
		//end recursion
	}
	else
	{
		digits[numPar % 10] = true;
		findDigits(numPar / 10);
	}
}

bool digitsFound()
{
	bool didFind = false;
	for (int i = 0; i<10; i++)
	{
		if (digits[i] == false)
		{
			return false;//Once we find a false we can stop this
		}
	}//After looking through all of the digits array and finding no false
	 // we should assume they were all true
	return true;
}
