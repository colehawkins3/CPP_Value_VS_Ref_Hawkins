/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan, Ph.D.  
  STUDENT (Stephen Hawkins):
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

void doubleByValue(double);
void doubleByRef(double&);

int main()
{
  //Pass by Value
  cout << "Pass by VALUE numValue and aValue are different." << endl;
  double numValue = 5;
  cout << "\t numValue now (initial) = " << numValue << endl;
  doubleByValue(numValue);
  cout << "\t numValue now = " << numValue << endl;
  doubleByValue(numValue);
  cout << "\t numValue now = " << numValue << endl;
  cout << "Note how numValue remains the same with each call of function\n";
  cout << "Note the function generates a result that is different from numValue.\n";
  cout << "Therefore, numValue and aValue are different variables (not linked) to each other \n";

  //Pass by Reference
  cout << "\nPass by REFERENCE (&) numRef and &aRef are the same. " << endl;
  double numRef = 5;
  cout << "\t numRef now (initial) = " << numRef << endl;
  doubleByRef(numRef);
  cout << "\t numRef now = " << numRef << endl;
  doubleByRef(numRef);
  cout << "\t numRef now = " << numRef << endl;
  cout << "Note how numRef's value changes with each call of function\n";
  cout << "Note the function generates a result that is the same as numRef.\n";
  cout << "Therefore, numRef and &aRef variables (are linked) to each other via memory location.\n";

    return 0;
}
void doubleByValue(double aValue)
{
  aValue *= 2;
  cout << "\t aValue now = " << aValue <<endl;

}

void doubleByRef(double &aRef)
{
  aRef *= 2;
  cout << "\t aRef now = " << aRef << endl;
}
