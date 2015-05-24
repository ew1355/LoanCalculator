#include <iostream>
using namespace std;

int main()
{
	double monthlyPayment;
	double CurrentBalance;
	double interestRate;
	int i;
	
	cout.precision(2);

	cout << "Enter the current balance of your loan: $";
	cin >> CurrentBalance; 
	cout << "Enter the interest rate (compounded monthly) : ";
	cin >> interestRate;
	cout << "Enter the desired monthly payment : $";
	cin >> monthlyPayment;

	while (interestRate >= 1)
	{
		interestRate = interestRate / 100;
	}

	CurrentBalance = CurrentBalance * (1 + interestRate / 12) - monthlyPayment;

	cout << "Your new balance is : $" << CurrentBalance << endl;

	
	while (CurrentBalance >0)

	{
		CurrentBalance = CurrentBalance * (1 + interestRate / 12) - monthlyPayment;

		cout << "Your balance is now : $" << CurrentBalance << endl;
		i = 0;
		i++;
	}

	cout << "You will have paid off the loan in " << i << " month(s)";
	system("pause");
	return 0;
}