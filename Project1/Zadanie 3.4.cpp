#include <iostream>
#include <conio.h>


using namespace std;

int a;
int baseHeight;//������� ������
int growth;//�������
int waning;//�����
int heightPerDay;//������ � �������� ����
int setHeight;//��������� ������



void day()
{
	int b;// �������� ����
	cout << "������� ����: ";
	cin >> b;

	if (b > 1)
		heightPerDay = (growth - waning) * (b - 1) + (growth / 2) + baseHeight;
	else heightPerDay = baseHeight + (growth / 2);


	cout << "������ � " << b << " ����: " << heightPerDay << " ��.";
}


void height()
{
	int a;//������
	int i;
	cout << "������� ��������� ������: ";
	cin >> a;

	for ( i = 1; setHeight < a ; i++)
	{
		setHeight = baseHeight + (growth - waning) * i;
	}

	cout << "������ �������� �� ������ " << a << " �� " << i + 1 << " ���(��).";
	
}


int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	cout << "������� ������: \n"
		 << "1.��������� ������ �������: ";
	cin  >> baseHeight;
	cout << "\n2.�������� ����� (�� ����): ";
	cin  >> growth;
	cout << "\n3.������� ������� �������� �� ����: ";
	cin  >> waning;

	system("cls");


	

	cout<< "�������� ������ �������: \n"
		<< "1.������ �� ������� �������� ������ � �������� ��������� ���.\n"
		<< "2.������ �� ������� ���� ������ �������� �� �������� ������.\n";
	cin >> a;
	system("cls");

	switch (a)
	{
	case 1:
		day();
		break;
	case 2:
		height();
		break;
	default:
		cout << "ERROR";
		break;
	}


	_getch();
	return 0;
}