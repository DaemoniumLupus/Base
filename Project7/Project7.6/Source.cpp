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

	cout << "***************** Барбершоп-калькулятор*****************";
	cout << "\nВведите кол-во мужчин в городе: ";
	cin >> mansCount;
	cout << "\nСколько барберов уже нанято?";
	cin >> barbersCount;

	cout << "\nОдин барбер стрижет " << mansPerBarberPerMonth << " клиентов в месяц.";

	requiredBarbersCount = mansCount / mansPerBarberPerMonth;
	remainder = mansCount % mansPerBarberPerMonth;

	if (remainder > 0)
	{
		requiredBarbersCount += 1;
	}
	cout << "\nНеобходимое кол-во барберов: " << requiredBarbersCount<< endl;
	cout << requiredBarbersCount << " барбера могут постричь " << requiredBarbersCount * mansPerBarberPerMonth << " мужчин в месяц\n";

	if (requiredBarbersCount > barbersCount)
		cout << "Нужно больше барберов!!!\n";
	else cout << "Барберов хватает!!!\n";

	system("pause");
	return 0;
	




}