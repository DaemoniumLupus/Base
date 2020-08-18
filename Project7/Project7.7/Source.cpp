#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int day;
	
	cout << "Добро пожаловать!!!";
	cout << "\nВведите день недели: ";
	cin >> day;
	cout << endl;
	switch (day)
	{
	case 1:
		cout << "Сегодня понедельник.";
		break;
	case 2:
		cout << "Сегодня вторник.";
		break;
	case 3:
		cout << "Сегодня среда.";
		break;
	case 4:
		cout << "Сегодня четверг.";
		break;
	case 5:
		cout << "Сегодня пятница.";
		break;
	case 6:
		cout << "Сегодня суббота.";
		break;
	case 7:
		cout << "Сегодня воскресенье.";
		break;
	default:
		cout << "ERROR";
		exit (0);
		break;
	}
	cout << "\nМеню на сегодня.\n";
	cout << "Основная часть\n";

	switch (day)
	{
	case 1:
		cout << "Уникальная часть на понедельник";
		break;
	case 2:
		cout << "Уникальная часть на вторник";
		break;
	case 3:
		cout << "Уникальная часть на среду";
		break;
	case 4:
		cout << "Уникальная часть на четверг";
		break;
	case 5:
		cout << "Уникальная часть на пятницу";
		break;
	case 6:
		cout << "Уникальная часть на субботу";
		break;
	case 7:
		cout << "Уникальная часть на воскресенье";
		break;
	default:
		break;
	}
	cout << "\nПриятного аппетита!!!\n";

	system("pause");
	return 0;

}