#include <iostream>
#include <conio.h>


using namespace std;

int a;
int baseHeight;//Базовая высота
int growth;//Прирост
int waning;//Убыль
int heightPerDay;//Высота в заданный день
int setHeight;//Требуемая высота



void day()
{
	int b;// Заданный день
	cout << "Введите день: ";
	cin >> b;

	if (b > 1)
		heightPerDay = (growth - waning) * (b - 1) + (growth / 2) + baseHeight;
	else heightPerDay = baseHeight + (growth / 2);


	cout << "Высота в " << b << " день: " << heightPerDay << " см.";
}


void height()
{
	int a;//Высота
	int i;
	cout << "Введите требуемую высоту: ";
	cin >> a;

	for ( i = 1; setHeight < a ; i++)
	{
		setHeight = baseHeight + (growth - waning) * i;
	}

	cout << "Бамбук вырастет до высоты " << a << " за " << i + 1 << " дня(ей).";
	
}


int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	cout << "Введите данные: \n"
		 << "1.Стартовая высота бамбука: ";
	cin  >> baseHeight;
	cout << "\n2.Скорость роста (за день): ";
	cin  >> growth;
	cout << "\n3.Сколько съедают гусеницы за ночь: ";
	cin  >> waning;

	system("cls");


	

	cout<< "Выберите нужный вариант: \n"
		<< "1.Узнать на сколько вырастет бамбук к середине заданного дня.\n"
		<< "2.Узнать за сколько дней бамбук вырастет на заданную высоту.\n";
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