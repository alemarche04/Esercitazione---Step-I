/*! @file CPolynomial.cpp
	@brief Implementation of Polynomial class 
	@author Alessia Marchese

	Details.
*/ 

#include "CPower.h"

/// @brief default constructor
Power::Power()
{
	//cout << "Power - default constructor" << endl;
	Init();
}


/// @brief constructor
///	@param k coefficient
///	@param e exponent
Power::Power(double k, double e)
{
	//cout << "Power - constructor with parameters" << endl;
	Init();
	SetPower(k, e);
}


/// @brief copy constructor
Power::Power(const Power& p)
{
	//cout << "Power - copy constructor" << endl;
	Init(p);
}


/// @brief destructor
Power::~Power()
{
	//cout << "Power - destructor" << endl;
	Reset();
}


/// @brief overload operator =
Power& Power::operator=(const Power& p)
{
	//cout << "Power - operator =" << endl;
	Init(p);
	return *this;
}


/// @brief overload operator ==
bool Power::operator==(const Power& p)
{
	//cout << "Power - operator ==" << endl;
	if (p.k_coeff == k_coeff && p.e_coeff == e_coeff)
		return true;
		
	return false;
}


/// @brief default initialization of the object
void Power::Init()
{
	k_coeff = 1;
	e_coeff = 0;
}


/// @brief initialization of the object as a copy of an object 
/// @param p reference to the object that should be copied 
void Power::Init(const Power &p)
{
	k_coeff = p.k_coeff;
	e_coeff = p.e_coeff;
}


/// @brief total reset of the object  
void Power::Reset()
{
	k_coeff = 0;
	e_coeff = 0;
}


/// @brief sets the coefficient and the exponent
///	@param k coefficient
///	@param e exponent
void Power::SetPower(double k, double e)
{
	k_coeff = k;
	e_coeff = e;
}


/// @brief returns the value of the function, given an input 
///	@param in the input
///	@return the value of the function
double Power::GetValue(double in)
{
	// ( k * in ) ^ e
	// pow(a, b) = a^b
	return (k_coeff*(pow(in, e_coeff)));
}


/// @brief writes an error message 
/// @param string message to be printed
void Power::ErrorMessage(const char *string) 
{	
	cout << endl << "ERROR -- Polynomial --";
	cout << string << endl;
}

/// @brief writes a warning message 
/// @param string message to be printed
void Power::WarningMessage(const char *string)
{	
	cout << endl << "WARNING -- Polynomial --";
	cout << string << endl;
}

/// @brief gives the status of the object 
void Power::Dump()
{
	cout << endl << "Power Function -- DUMP" << endl;
	cout << k_coeff << "*x^" << e_coeff << endl;
}