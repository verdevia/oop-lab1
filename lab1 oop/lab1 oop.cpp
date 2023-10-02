#include <iostream>
#include "geopr.h"
using namespace std;

int main()
{
	geopr gp;
	gp.read();

	int j;
	std::cout << "Enter elements number (j)";
	std::cin >> j;

	double aj = gp.elj(j);
	std::cout << "Element a" << j << " = " << aj << std::endl;

	return 0;
}