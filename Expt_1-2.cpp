#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	//Inputs
	double mass, density, volume;

	cout << setprecision(2) << fixed << showpoint;

	//Constants
	const double multiplier_constant = 0.25;

	//Input Here
	cout << "Please enter mass here (in grams): \n";
	cin >> mass;

	cout << "Please enter density here (in grams per cubic centimeters) : \n";
	cin >> density;

	//Computations
	volume = density * multiplier_constant * mass;

	//Display
	cout << "Computed Volume:" << volume << endl;

	-getch();
	return 0;

}