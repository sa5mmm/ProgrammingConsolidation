#include<iostream>
#include<string>
using namespace std;

//Global
const double PI = 3.141592; //Generally constants are always CAPS
int myNumber = 14;

//Function prototypes
double mySquareIt(int numPar);
void myExponentFunction(int basePar, int exponentPar, int&resultOfXToThePowerYPar);


int main()
{
	//Declarations
	int age;
	double taxRate;//Double is twice as big as float
	string firstName = "Robert";
	char initial = 'R';
	bool status = true;
	int resultOfXToTheY;
	int myBase;
	int myExponent;
	//Get user input
	cout << "What is your name: ";
	cin >> firstName;
	cout << "How old are you: ";
	cin >> age;


	//Calculation
	age *= 2;//Updates age by multiplying it by 2
	cout << age << endl;
	//age++;//increment by 1 (post increment)
	cout << age++ << endl;
	//++age;//increment by 1 (pre incrementing)
	cout << ++age << endl;

	cout << "Enter a base number: ";
	cin >> myBase;
	cout << "Enter an exponent: ";
	cin >> myExponent;
	myExponentFunction(myBase, myExponent, resultOfXToTheY);
	cout <<  resultOfXToTheY << endl;
	/*return age == 3;
	if (age == 3)
	{

	}*/
	age += 1;
	age -= 1;
	age *= 1;
	age /= 1;

	//Output
	cout << "Your age is " << age << "\n";



	system("pause");
	return 0;
}
//Function Definition
double mySquareIt(int numPar)//numPar == 10
{
	return pow(numPar, 2.0);

	//return numPar*numPar;
}
void myExponentFunction(int basePar, int exponentPar, int&resultOfXToThePowerYPar)
{
	resultOfXToThePowerYPar = pow(basePar, exponentPar);



}