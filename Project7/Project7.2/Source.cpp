#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a,b,c,summ,answer;

	cout << "������� ����� �� 1 �� 5.\n";
	cin >> c;

	switch (c)
	{
	case 1:
		a = 48;
		b = 56;
		summ = 104;
		break;
	case 2:
		a = 94;
		b = 12;
		summ = 106;
		break;
	case 3:
		a = 78;
		b = 95;
		summ = 173;
		break;
	case 4:
		a = 158;
		b = 256;
		summ = 414;
		break;
	case 5:
		a = 15;
		b = 5;
		summ = 20;
		break;
	default:
		cout << "ERROR";
		exit(0);
		break;
	}

	cout << "������� �����:	" << a << " � " << b << ".\n";
	cout << "������� ���������: ";
	cin >> answer;
	if (answer == summ)
		cout << "\n�����.\n";
	else cout << "\n�������.\n";

	system("pause");
	return 0;
}