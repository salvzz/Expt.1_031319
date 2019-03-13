#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	//Inputs
	double averageDailyBalance, netbalance, payment, d1, d2, interest;

	//Constants
	const double interest_constant = 0.0152;

	cout << setprecision(2) << fixed << showpoint;

	//Promtps
	cout << "Please type in Balance shown in the bill: \n";
	cin >> netbalance;
	cout << "Please type in Payment made: \n";
	cin >> payment;
	cout << "Please type in the number of days in the billing cycle: \n";
	cin >> d1;
	cout << "Please type in the number of days payment is made before the billing cycle: \n";
	cin >> d2;

	//Computations
	averageDailyBalance = (netbalance * d1 - payment * d2)/d1;
	interest = (averageDailyBalance * interest_constant);

	//Output
	cout << "Computed Interest:" << interest << endl;

	-getch();
	return 0;

}