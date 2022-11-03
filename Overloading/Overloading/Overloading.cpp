// Overloading.cpp : This code contains five errors before it will work as desired.  Find those errors, 
// document a description of the errors and their fix, and fix them.  Try using the debugger to 
// step through the program to find the bugs.  As you step through, take notice of the information
// you can see.  
//

//Removed stadfx. Not an error but doesn't function properly in my experience on VS.
#include <cstdlib>
#include <iostream>
using namespace std;

int add(int, int);
double add(double, double);

int main()
{
	int a, b, x;
	//Changed float to double.
	double c, d, y;

	cout << "Enter two integers\n";
	cin >> a >> b;
	//Changed c to b as it was a float and does not get a value yet.
	x = add(a, b);
	cout << "Sum of integers: " << x << endl;

	cout << "Enter two doubles\n";
	cin >> c >> d;
	//Changed a and b to c and d as this is what we are caluclating.
	y = add(c, d);
	cout << "Sum of doubles: " << y << endl;

	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	//Added a return value.
	return sum;
}

double add(double a, double b)
{
	double sum;
	sum = a + b;
	//Added a semicolon. Essential.
	return sum;
}