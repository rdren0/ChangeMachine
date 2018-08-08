//#include <stdio.h>
#include <iostream>
using namespace std;
int main(void)
{
	int intDollars;
	int intQuarters;
	int intDimes;
	int intNickles;
	int intLeftover;
	int intTotal;
	cout << " Enter number of pennies being deposited. " << endl;
	cin >> intTotal;
	intDollars = intTotal / 100;
	intLeftover = intTotal % 100;
	intQuarters = intTotal / 25;
	intLeftover %= 25;
	intDimes = intTotal / 10;
	intLeftover %= 10;
	intNickles = intTotal / 20;
	intLeftover %= 20;
	cout << "Dollars: " << intDollars << endl;
	cout << "Quarters: " << intQuarters << endl;
	cout << "Dimes: " << intDimes << endl;
	cout << "Nickles: " << intNickles << endl;
	cout << "Leftover Pennies: " << intLeftover << endl;
	system("pause");
	return 0;
}


