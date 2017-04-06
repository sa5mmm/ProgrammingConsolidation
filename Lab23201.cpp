#include<iostream>
using namespace std;
const double PI = 3.1415926585;
int main()
{
	double radius;
	double circumference;
	double area;

	double *radiusPtr = &radius;
	double *circumferencePtr = &circumference;
	double *areaPtr = &area;

	cout << "Please insert a radius: ";
	cin >> *radiusPtr;

	*circumferencePtr = *radiusPtr * 2 * PI;
	*areaPtr = pow(*radiusPtr, 2.0)*PI;

	cout << "Circumference: " << *circumferencePtr << endl;
	cout << "Area: " << *areaPtr << endl;


	system("pause");
	return 0;
}