#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");


	int total = 0;
	int totalStage;
	int stageIn;
	int stageOut;
	int ticetPrice = 20;
	int totalMoney;

	int oil;
	int salary;
	int taxes;
	int repairs;
	int income;





	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
		case 0:
			cout << "��������� �� ��������� ����� ������������. \n� ������ ����������: " << totalStage;
			break;
		case 1:
			cout << "��������� �� ��������� �������� ����������. \n� ������ ����������: " << totalStage;
			break;
		case 2:
			cout << "��������� �� ��������� ����� ��������. \n� ������ ����������: " << totalStage;
			break;
		case 3:
			cout << "��������� �� ��������� ���������������� ��������. \n� ������ ����������: " << totalStage;
			break;
		default:
			break;
		}

		cout << "������� ���������� ����� �� ���������? \n";
		cin >> stageIn;
		totalStage += stageIn;
		total += stageIn;

		cout << "������� ���������� ����� �� ���������? \n";
		cin >> stageOut;
		totalStage -= stageOut;

		switch (i)
		{
		case 0:
			cout << "�������� � ��������� ����� ������������. \n� ������ ����������: " << totalStage;
			break;
		case 1:
			cout << "�������� � ��������� �������� ����������. \n� ������ ����������: " << totalStage;
			break;
		case 2:
			cout << "�������� � ��������� ����� ��������. \n� ������ ����������: " << totalStage;
			break;
		case 3:
			cout << "�������� � ��������� ���������������� ��������. \n� ������ ����������: " << totalStage;
			break;
		default:
			break;
		}

		cout << "---------����---------";




	}

	totalMoney = total * ticetPrice;
	oil = totalMoney / 5;
	salary = totalMoney / 4;
	taxes = totalMoney / 5;
	repairs = totalMoney / 5;
	income = totalMoney - oil - salary - taxes - repairs;


	cout << "����� ����������: "
		<< total * ticetPrice << " ���. \n"
		<< "�������� ��������: "
		<< salary << " ���. \n"
		<< "������� �� �������: "
		<< oil << " ���. \n"
		<< "������: "
		<< taxes << " ���. \n"
		<< "������� �� ������ ������: "
		<< repairs << " ���. \n"
		<< "����� �����: "
		<< income << " ���. \n";



	


	_getch();
	return 0;
}
