#include "geopr.h"
#include <iostream>

void geopr::init(double a0, double r)
{
	first = a0;
	second = r;
	if (r == 0.0)
		std::cerr << "Failure: r can't equal 0";
	if (a0 == 0, 0)
		std::cerr << "Failure: a0 can't equal 0";

}

void geopr::read()
{
	double a0, r;
	std::cout << "Enter a0" << std::endl;
	std::cin >> a0;
	std::cout << "Enter r" << std::endl;
	std::cin >> r;
	init(a0, r);
}

double geopr::elj(int j)
{
	if (j < 0)
	{
		std::cerr << "Failure: unaccaptable j value" << std::endl;
		return 0.0;
	}
	return first * pow(second, j);
}

void geopr::display()
{
	std::cout << "a0 = " << first << std::endl;
	std::cout << "r = " << second << std::endl;
}
