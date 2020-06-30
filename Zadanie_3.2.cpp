#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");


	int total = 0;
	int totalStage = 0;
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
			cout << "\nПрибываем на остановку Улица Програмистов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 1:
			cout << "\nПрибываем на остановку Проспект Алгоритмов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 2:
			cout << "\nПрибываем на остановку Шоссе Дедлайна. \nВ салоне пассажиров: " << totalStage;
			break;
		case 3:
			cout << "\nПрибываем на остановку Скомпилированный Переулок. \nВ салоне пассажиров: " << totalStage;
			break;
		default:
			break;
		}

		cout << "\nСколько пассажиров зашло на остановке? \n";
		cin >> stageIn;
		totalStage += stageIn;
		total += stageIn;

		cout << "\nСколько пассажиров вышло на остановке? \n";
		cin >> stageOut;
		totalStage -= stageOut;

		switch (i)
		{
		case 0:
			cout << "\nОтбываем с остановки Улица Програмистов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 1:
			cout << "\nОтбываем с остановки Проспект Алгоритмов. \nВ салоне пассажиров: " << totalStage;
			break;
		case 2:
			cout << "\nОтбываем с остановки Шоссе Дедлайна. \nВ салоне пассажиров: " << totalStage;
			break;
		case 3:
			cout << "\nОтбываем с остановки Скомпилированный Переулок. \nВ салоне пассажиров: " << totalStage;
			break;
		default:
			break;
		}

		cout << "\n---------Едем---------";




	}

	totalMoney = total * ticetPrice;
	oil = totalMoney / 5;
	salary = totalMoney / 4;
	taxes = totalMoney / 5;
	repairs = totalMoney / 5;
	income = totalMoney - oil - salary - taxes - repairs;


	cout << "\nВсего заработали: "
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
