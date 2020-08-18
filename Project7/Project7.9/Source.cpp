#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	 _int64 income;
	double tax;

	cout << "¬ведите сумму дохода: ";
	cin >> income;

	if (income <= 10000)
		tax = income * 0.13;
	else if (income > 10000 && income <= 50000)
		tax = 0.2 * (income - 10000) + 0.13 * 10000;
	else
		tax = 0.3 * (income - 50000) + 0.2 * (50000 - 10000) + 0.13 * 10000;

	cout << "\n¬ам надо заплатить налогов на сумму: " << tax << " рублей.\n";
	

	system("pause");
	return 0;

}