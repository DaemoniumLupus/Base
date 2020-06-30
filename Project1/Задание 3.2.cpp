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
			cout << "Прибываем на остановку Улица Програмистов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 1:
			cout << "Прибываем на остановку Проспект Алгоритмов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 2:
			cout << "Прибываем на остановку Шоссе Дедлайна. \nВ салоне пассажиров: " << totalStage;
			break;
		case 3:
			cout << "Прибываем на остановку Скомпилированный Переулок. \nВ салоне пассажиров: " << totalStage;
			break;
		default:
			break;
		}

		cout << "Сколько пассажиров зашло на остановке? \n";
		cin >> stageIn;
		totalStage += stageIn;
		total += stageIn;

		cout << "Сколько пассажиров вышло на остановке? \n";
		cin >> stageOut;
		totalStage -= stageOut;

		switch (i)
		{
		case 0:
			cout << "Отбываем с остановки Улица Програмистов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 1:
			cout << "Отбываем с остановки Проспект Алгоритмов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 2:
			cout << "Отбываем с остановки Шоссе Дедлайна. \nВ салоне пассажиров: " << totalStage;
			break;
		case 3:
			cout << "Отбываем с остановки Скомпилированный Переулок. \nВ салоне пассажиров: " << totalStage;
			break;
		default:
			break;
		}

		cout << "---------Едем---------";




	}

	totalMoney = total * ticetPrice;
	oil = totalMoney / 5;
	salary = totalMoney / 4;
	taxes = totalMoney / 5;
	repairs = totalMoney / 5;
	income = totalMoney - oil - salary - taxes - repairs;


	cout << "Всего заработали: "
		<< total * ticetPrice << " Руб. \n"
		<< "Зарплата водителю: "
		<< salary << " Руб. \n"
		<< "Расходы на топливо: "
		<< oil << " Руб. \n"
		<< "Налоги: "
		<< taxes << " Руб. \n"
		<< "Расходы на ремонт машины: "
		<< repairs << " Руб. \n"
		<< "Итого доход: "
		<< income << " Руб. \n";



	


	_getch();
	return 0;
}
