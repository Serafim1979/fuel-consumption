#include<iostream>
using namespace std;

int main()
{
	int km;
	double gasVol;
	double ans;
	char ch;

	do 
	{
		cout << "Enter distance(in km): ";
		cin >> km;
		cout << "Enter the amount of fuel consumed: ";
		cin >> gasVol;

		ans = (double)gasVol / km * 100;

		cout << "Fuel consumption of your car is: " << ans << endl;

		cout << "Continue(y/n)?";
		cin >> ch;
	} while (ch == 'y');

	system("pause");
	return 0;
}