#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a, remainder;

	cout << "Введите число: ";
	cin >> a;

	remainder = a % 2;

	if (remainder == 0)
		cout << "\nЧисло четное.\n";
	else cout << "\nЧисло нечетное.\n";

	system("pause");
	return 0;
}