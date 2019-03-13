#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double BoxPrice, SidelinePrice, PremiumPrice, GeneralAdmissionPrice, box, sideline, premium, GeneralAdmission, TotalBox, TotalSideline, TotalPremium,
		TotalGeneralAdmission;

	//Prices and Tickets
	cout << "Please enter Box ticket price: \n";
	cin >> BoxPrice;
	cout << "Please enter Sideline ticket price: \n";
	cin >> SidelinePrice;
	cout << "Please enter Premium ticket price: \n";
	cin >> PremiumPrice;
	cout << "Please enter General Admission Price: \n";
	cin >> GeneralAdmissionPrice;
	cout << "Number of Box ticket/s sold: \n";
	cin >> box;
	cout << "Number of Sideline ticket/s sold: \n";
	cin >> sideline;
	cout << "Number of Premium ticket/s sold: \n";
	cin >> premium;
	cout << "Number of General Admission ticket/s sold: \n";
	cin >> GeneralAdmission;

	//Calculation
	TotalBox = BoxPrice * box;
	TotalSideline = SidelinePrice * sideline;
	TotalPremium = PremiumPrice * premium;
	TotalGeneralAdmission = GeneralAdmission * GeneralAdmissionPrice;

	//Display
	cout << "Number of Box Tickets Sold:" << box << endl;
	cout << "Total Box Ticket Sale:" << TotalBox << endl;
	cout << "Number of Sideline Tickets Sold:" << sideline << endl;
	cout << "Total Sideline Ticket Sale:" << TotalSideline << endl;
	cout << "Number of Premium Tickets Sold:" << premium << endl;
	cout << "Total Premium Ticket Sale:" << TotalPremium << endl;
	cout << "Number of General Admission Tickets Sold:" << GeneralAdmission << endl;
	cout << "Total General Admission Ticket Sale:" << TotalGeneralAdmission << endl;

	-getch();
	return 0;
}
