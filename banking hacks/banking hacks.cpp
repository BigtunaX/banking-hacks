// swap
// demonstrates passing refereces to alter argument variables

#include "stdafx.h"
#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	cout << "Displaying the Bank account of the bank account of the Terrorist Orginization.\n";
	cout << "Please stand by...\n";
	system("pause");

	int Terrorist = 10000;
	int Local = 100;
	// displays Terrorist bank ancout of 10000

	cout << "\nRouting number 4236xxxxxxxx\n";
	cout << "Terrorist organization bank account is " << Terrorist << " American Dollars.\n";
	system("pause");

	cout << "\nDisplaying the Bank account of the bank account of Joe's Coffee Shop.\n";
	cout << "Please stand by...\n";
	system("pause");

	// displays Locals bank account of 100
	cout << "\nRouting number 6298xxxxxxxx\n";
	cout << "Joe's Coffee Shop's bank account is " << Local << " American Dollars.\n";
	system("pause");

	// displays a swap of the Terroist and Local bank accounts by swaping values of Y and X 
	cout << "\nActivating Hacking Protocol\n";
	cout << "please stand by...\n";
	system("pause");
	cout << "\nBank account balances have been swapped\n";

	goodSwap(Terrorist, Local);
	cout << "\nTerrorist Routing number 4236xxxxxxxx: " << Terrorist << " American Dollars.\n";
	cout << "Joe's Coffee Shop Routing number 6298xxxxxxxx: " << Local << " American Dollars.\n";

	// ends the Hacking Protocol
	cout << "\nThank you for using CIA Hacking Protocol\n";
	cout << "God Bless America!\n";

	system("pause");
	return 0;
}
// Integers that determine the swap between the two functions.
void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}
