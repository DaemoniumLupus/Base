#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a, b;

	cout << "��������� 2 �����.\n";
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "\n������� ������ �����: ";
	cin >> b;

	if (a < b)
		cout << "\n������ ��c�� ������ �������.\n";
	else if (a > b)
		cout << "\n������ ����� ������ �������.\n";
	else if (a == b)
		cout << "\n����� �����.\n";

	system("pause");
	return 0;
}