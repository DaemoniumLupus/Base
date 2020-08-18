#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a, b, remainder;

	cout << "Введите число которое будем делить: ";
	cin >> a;
	cout << "\nВведите число на которое будем делить: ";
	cin >> b;

	remainder = a % b;

	if (remainder == 0)
		cout << "\nПервое число кратно второму.";
	else cout << "\nПервое число делится с остатком " << remainder;
	cout << endl;

	system("pause");
	return 0;
}