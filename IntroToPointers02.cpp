/*
Create a program that calculates the area
and perimeter of a square based on the
user's side value, using pointers
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int side;
	int area;
	int perimeter;

	int *sidePtr = &side;
	int *areaPtr = &area;
	int *perimeterPtr = &perimeter;

	cout << "Enter a side value: ";
	cin >> *sidePtr;//this is the equivalent of cin>>side

	*areaPtr = pow(side, 2.0);
	*perimeterPtr = 4 * side;

	cout << "Area: \t\t" << *areaPtr << "\tAddress Location: "<<areaPtr << endl;
	cout << "Perimeter: \t" << *perimeterPtr << "\tAddress Location: " << perimeterPtr << endl;
	cout << "Side: \t\t" << *sidePtr << "\tAddress Location: " << sidePtr << endl;


	system("pause");
	return 0;
}