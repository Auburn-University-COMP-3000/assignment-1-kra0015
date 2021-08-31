#include <iostream>
#include <math.h>

using namespace std;

int main() {

	// Declare variables
	double spfWeightWater = 62.4;
	double weightSphere;
	double radiusSphere;
    double pi = 3.14159;
    double volumeSphere;
	double bForce;

	// Input the weight and radius of a sphere
	cout << "Input weight of the sphere in pounds: ";
	cin >> weightSphere;
	cout << "Input radius of the sphere in feet: ";
	cin >> radiusSphere;

	// Determine if the sphere will float or sink
    volumeSphere = ((4/3)*pi)*pow(radiusSphere, 3.0);
	bForce = volumeSphere*spfWeightWater;

	// Ouput whether the sphere will sink or float in water 
	if (bForce >= weightSphere) {
		cout << "The sphere will float in water.";
	}
	else {
		cout << "The sphere will sink in water.";
	}

	return 0;
}