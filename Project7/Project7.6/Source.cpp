#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int mansCount;
	int  barbersCount;
	int mansPerBarber = 8;
	int mansPerBarberPerMonth = mansPerBarber * 30;
	int requiredBarbersCount;
	int remainder;

	cout << "***************** ���������-�����������*****************";
	cout << "\n������� ���-�� ������ � ������: ";
	cin >> mansCount;
	cout << "\n������� �������� ��� ������?";
	cin >> barbersCount;

	cout << "\n���� ������ ������� " << mansPerBarberPerMonth << " �������� � �����.";

	requiredBarbersCount = mansCount / mansPerBarberPerMonth;
	remainder = mansCount % mansPerBarberPerMonth;

	if (remainder > 0)
	{
		requiredBarbersCount += 1;
	}
	cout << "\n����������� ���-�� ��������: " << requiredBarbersCount<< endl;
	cout << requiredBarbersCount << " ������� ����� �������� " << requiredBarbersCount * mansPerBarberPerMonth << " ������ � �����\n";

	if (requiredBarbersCount > barbersCount)
		cout << "����� ������ ��������!!!\n";
	else cout << "�������� �������!!!\n";

	system("pause");
	return 0;
	




}