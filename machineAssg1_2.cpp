#include <iostream>
#include <math.h>

using namespace std;


// The following algorithm (attributed to Clever Moler) 
//estimates machine precision (eps):
// a = 4.0/3.0;
// b = a−1.0;
// c = b+b+b;
// eps = abs(c − 1.0).
// Implement the program twice with single and double 
//precision variable types and report the value of eps for both
// single and double precision.

void singlePrecision ();
void doublePrecision();

int main()
{

	singlePrecision();
 	doublePrecision();

return 0;
}

void singlePrecision ()
{
	float aFloat 	= 0.0;
	float bFloat 	= 0.0;
	float cFloat 	= 0.0;
	float epsFloat 	= 0.0;

	aFloat = (4.0/3.0);
	//cerr << "\n a:" << aFloat;

	bFloat = (aFloat - 1.0);
	//cerr << "\n b:" << bFloat;

	cFloat = (bFloat + bFloat + bFloat);
	//cerr << "\n c:" << cFloat;

	epsFloat = abs(cFloat - 1.0);
	cout << "\n epsFloat: " << epsFloat << endl;
}

void doublePrecision()
{

	double aDouble 	 = 0.00;
	double bDouble 	 = 0.00;
	double cDouble 	 = 0.00;
	double epsDouble = 0.00;

	aDouble = (4.0/3.0);
	//cerr << "\n a:" << aDouble;

	bDouble = (aDouble - 1.0);
	//cerr << "\n b:" << bDouble;

	cDouble = (bDouble + bDouble + bDouble);
	//cerr << "\n c:" << cDouble;

	epsDouble = abs(cDouble - 1.0);
	cout << "\n epsDouble: " << epsDouble << endl;
}











