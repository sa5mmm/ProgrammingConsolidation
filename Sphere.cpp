#include "Sphere.h"
#include <iostream>
const double PI = 3.141596;
double Sphere::calcSurfaceArea()
{
	return 4.0 * PI * pow(getRadius(), 2.0);
}

double Sphere::calcVolume()
{

	return (4.0 / 3.0)* PI * pow(getRadius(), 3.0);
}

void Sphere::setRadius(double radiusPar)
{
	if (radiusPar > 0)
	{
		radius = radiusPar;
	}
	else if (radiusPar < 0)
	{
		radius = fabs(radiusPar);
	}
}

double Sphere::getRadius(void)
{
	return radius;
}

Sphere::Sphere()
{
	radius = 0;
}

Sphere::Sphere(double radiusPar)
{
	setRadius(radiusPar);
}