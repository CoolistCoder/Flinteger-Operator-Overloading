//============================================================================
// Name        : Flintegervar.cpp
// Author      : Alec Roberts
// Version     : 1.00
// Copyright   : Made by me, Alec Roberts
// Description : A custom data type for a friend
//============================================================================

#include <iostream>
using namespace std;
#include "Flinteger.hpp"

int main()
{
	//Flinteger code goes here c:
	Flinteger *flint = new Flinteger(10);
	cout << "Demonstrating the Flinteger" << endl;
	cout << "This Flinteger has a value of " << *flint << endl;
	cout << "Adding 10 to the Flinteger" << endl;
	*flint += 10;
	cout << "The value of the Flinteger is now " << *flint << endl;

	delete flint;

	return 0;
}
