#pragma once
#include <iostream>

struct geopr
{
	double first;
	double second;

	void init(double a0, double r);
	void read();
	double elj(int j);
	void display();
};

