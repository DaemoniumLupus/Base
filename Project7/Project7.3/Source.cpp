#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a, remainder;

	cout << "������� �����: ";
	cin >> a;

	remainder = a % 2;

	if (remainder == 0)
		cout << "\n����� ������.\n";
	else cout << "\n����� ��������.\n";

	system("pause");
	return 0;
}