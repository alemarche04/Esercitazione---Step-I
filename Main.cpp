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

	Power pow3(pow2); // pow3 = 3*x^2
	pow3.Dump();

	cout << endl << "Value of pow3 = 3*x^2 if x = 2: " << pow3.GetValue(2) << endl;


    double cf1[3] = {1, 2, 3};
	cout << "sono qui" << endl;
	double cf2[5] = {4, 7, 2, 5, 8};
	cout << "ora invece sono qui" << endl;
	
	Polynomial p1(cf1, 3);
	cout << "Ciao" << endl;
	Polynomial p2(cf2, 5);
	Polynomial p3 = p1;

	p1.Dump();
	p2.Dump();
	p3.Dump();

	p1.Reset(); 
	p1.Dump();

	Function* F;
	
	F = &pow1;
	F->Dump();

	F = &p3;
	F->Dump();

	return 0;
}