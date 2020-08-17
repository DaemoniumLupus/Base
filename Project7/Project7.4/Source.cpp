#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int exp;

	cout << "Введите кол-во опыта: ";
	cin >> exp;

	if (exp < 1000)
		cout << "\nУ вас 1 уровень.";
	else if (exp < 2500)
		cout << "\nУ вас 2 уровень.";
	else if (exp < 5000)
		cout << "\nУ вас 3 уровень.";
	else
		cout << "\nУ вас 4 уровень.";
	cout << endl;
	system("pause");
	return 0;

}