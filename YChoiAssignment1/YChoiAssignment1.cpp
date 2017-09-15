// YChoiAssignment1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	float cost;
	float amount;
	float totalAmount;
	float additional;
	int convertedCost;

	do {
		cout << "Please enter the cost of the item (Enter 0 if you wish to exit) : ";
		cin >> cost;

		if (cost == 0)
			break;

		cout << "Please enter the amount paid: ";
		cin >> amount;

		while (amount < cost) {
			totalAmount = cost - amount;
			cout << "This is not enough. Please put in $" << setprecision(2) << fixed << totalAmount << " more. Enter additional amount: ";
			cin >> additional;
			amount += additional;
		};
		
		convertedCost = (amount - cost) * 100;
		if (amount > 0) {
			cout << "Your change will be: " << convertedCost / 100 << " dollars";
			convertedCost = convertedCost % 100;
			cout << " , " << convertedCost / 25 << " quarters";
			convertedCost = convertedCost % 25;
			cout << " , " << convertedCost / 10 << " dimes ";
			convertedCost = convertedCost % 10;
			cout << " , " << convertedCost / 5 << " nickels" << endl;
			convertedCost = convertedCost % 5;
			
		}
	} while (cost >= 0);

	return 0;
}
