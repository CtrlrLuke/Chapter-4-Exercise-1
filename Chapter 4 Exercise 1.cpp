#include <iostream>
using namespace std;

// this program will prompt the user to enter two numbers and determines the smaller and larger number using the conditional operator
int main()
{
	int num1, num2;

	// prompt for user input
	cout << "Enter two integers seperated by a space: ";
	cin >> num1 >> num2;

	// use conditional operator to determine which num is bigger
	int max = (num1 > num2) ? num1 : num2;
	int min = (num1 < num2) ? num1 : num2;

	// display
	cout << "\nSmaller number: " << min << endl;
	cout << "Larger number: " << max << endl;
}

