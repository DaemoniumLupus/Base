#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a, b, remainder;

	cout << "������� ����� ������� ����� ������: ";
	cin >> a;
	cout << "\n������� ����� �� ������� ����� ������: ";
	cin >> b;

	remainder = a % b;

	if (remainder == 0)
		cout << "\n������ ����� ������ �������.";
	else cout << "\n������ ����� ������� � �������� " << remainder;
	cout << endl;

	system("pause");
	return 0;
}