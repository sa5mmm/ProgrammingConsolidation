#ifndef _SPHERE
#define _SPHERE
#endif

class Sphere
{
public:
	void setRadius(double radiusPar); //mutator, setter
	double getRadius(void); //accessor , getter

	double calcSurfaceArea();
	double calcVolume();

	Sphere(); //default constructor
	Sphere(double radiusPar); //overloaded constructor

private:
	double radius;
};