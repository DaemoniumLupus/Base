#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("color 02");

	int a, b;

	cout << "—равнение 2 чисел.\n";
	cout << "¬ведите первое число: ";
	cin >> a;
	cout << "\n¬ведите второе число: ";
	cin >> b;

	if (a < b)
		cout << "\nѕервое чиcло меньше второго.\n";
	else if (a > b)
		cout << "\n¬торое число меньше первого.\n";
	else if (a == b)
		cout << "\n„исла равны.\n";

	system("pause");
	return 0;
}