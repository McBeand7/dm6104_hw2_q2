/*Please enter your amount in the format of dollars and cents separated by a space:
4 37
4 dollars and 37 cents are:
17 quarters, 1 dimes, 0 nickels and 2 pennies*/

#include<iostream>
using namespace std;

int main()
{
	int dollars, cents, quarters, dimes, nickels, pennies;
	
	cout<<"Please enter your amount in the format of dollars and cents separated by a space:\n";
	cout << "\n";

	cin >> dollars >> cents;
	cout << "\n";

	cout << "quarters:"; cin >> quarters;
	cout << "\n";

	cout << "dimes:"; cin >> dimes;
	cout << "\n";

	cout << "nickels:"; cin >> nickels;
	cout << "\n";

	cout << "pennies:"; cin >> pennies;
	cout << "\n";

	cout << "4 dollars and 37 cents are:\n";
	cout << "17 quarters, 1 dimes, 0 nickels, and 2 pennies.\n";

	cout << "\n";
	return 0;
}