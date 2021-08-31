#include <iostream>
#include <math.h>

using namespace std;

int main() {

	// Declare variables
	const int acc = 32;
	int x;
	double y;

	// Allow the user to enter a time in seconds
	cout << "Enter a time in seconds: ";
	cin >> x;

	// Calculating distance
	y = (acc/2) * (x*x);
	
	// Output how far an object would drop if it is in freefall for that time
	cout << "An object in freefall for " << x << " seconds will fall " << y << " feet.";

	return 0;
}