/*! @file Main.cpp
	@brief A main file used to test the classes: Function, Polynomial, Power
	@author Alessia Marchese

	Details.
*/ 
#include "CPower.h"
#include"CPolynomial.h"

int main()
{
	Power pow1; // pow1 = 1*x^0
	pow1.Dump();

	pow1.SetPower(3, 2); // pow1 = 3*x^2
	pow1.Dump();

	Power pow2(2, 3);  // pow2 = 2*x^3
	pow2.Dump();

	pow2 = pow1;  // pow2 = 3*x^2
	pow2.Dump();

	if (pow1 == pow2)
		cout << endl << "pow1 and pow2 are equal" << endl; //should happen

	Power pow3(pow2); // pow3 = 3*x^2
	pow3.Dump();

	cout << endl << "Value of pow3 = 3*x^2 if x = 2: " << pow3.GetValue(2) << endl;

	pow1.Reset();
	pow1.Dump();

	if (pow1 == pow3)
		cout << endl << "pow1 and pow3 are equal" << endl; // should not happen


    double cf1[3] = {1, 2, 3};
	double cf2[5] = {4, 7, 2, 5, 8};
	
	Polynomial p1(cf1, 3);
	Polynomial p2(cf2, 5);
	Polynomial p3 = p1;

	p1.Dump();
	p2.Dump();
	p3.Dump();

	if(p3 == p1)
		cout << endl << "p1 and p3 are equal" << endl; // should happen
	if(p2 == p1)
		cout << endl << "p1 and p2 are equal" << endl; // should not happen

	p1.Reset(); 
	p1.Dump();

	Function* F;
	
	F = &pow1;
	F->Dump();

	F = &p3;
	F->Dump();

	return 0;
}