#include<iostream>
#include<string>
#include"Sphere.h"
using namespace std;

int main()
{
	double radiusTemp;
	Sphere basketball; //instantiation. Basketball is an object of type sphere
	Sphere baseball(2.0);

	cout << "What is the radius for the basketball: ";
	cin >> radiusTemp;
	basketball.setRadius(radiusTemp);

	cout << endl;
	cout << "Basketball:" << endl<< "Radius: " << basketball.getRadius() << endl << "Surface Area: " << basketball.calcSurfaceArea() << endl << "Volume: " << basketball.calcVolume() << endl;

	cout << endl;
	cout << "Baseball:" <<endl<< "Radius: "<<baseball.getRadius() << endl << "Surface Area: " << baseball.calcSurfaceArea() << endl << "Volume: " << baseball.calcVolume() << endl;
	
	cout << endl;
	system("pause");
	return 0;
}