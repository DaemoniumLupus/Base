#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int exp;

	cout << "������� ���-�� �����: ";
	cin >> exp;

	if (exp < 1000)
		cout << "\n� ��� 1 �������.";
	else if (exp < 2500)
		cout << "\n� ��� 2 �������.";
	else if (exp < 5000)
		cout << "\n� ��� 3 �������.";
	else
		cout << "\n� ��� 4 �������.";
	cout << endl;
	system("pause");
	return 0;

}