#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int firstEmployee, secondEmployee, thirdEmployee;
	int a = 0 , b = 0, c = 0;
	

	cout << "������� �/� ������� ����������: ";
	cin >> firstEmployee;
	cout << "������� �/� ������� ����������: ";
	cin >> secondEmployee;
	cout << "������� �/� �������� ����������: ";
	cin >> thirdEmployee;

	if (firstEmployee >= secondEmployee && firstEmployee >= thirdEmployee)
	{
		a = firstEmployee;
	}
	if (a != 0)
	{
		b = max(secondEmployee, thirdEmployee);
		c = min(secondEmployee, thirdEmployee);
	}

	if (secondEmployee >= firstEmployee && secondEmployee >= thirdEmployee)
	{
		a = secondEmployee;
	}
	if (b == 0 && a != 0)
	{
		b = max(firstEmployee, thirdEmployee);
		c = min(firstEmployee, thirdEmployee);
	}

	if (thirdEmployee >= secondEmployee && thirdEmployee >= firstEmployee)
	{
		a = thirdEmployee;
	}
	if (b == 0)
	{
		b = max(secondEmployee, firstEmployee);
		c = min(secondEmployee, firstEmployee);
	}

	cout << "\n������� ����� ����� ������� � ����� ������: ";
	cout << a - c;

	cout << "\n������� �/� ������: ";
	cout << (a + b + c) / 3;

	system("pause");
	return 0;
}