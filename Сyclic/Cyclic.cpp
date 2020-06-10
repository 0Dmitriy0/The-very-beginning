#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "Цикли for():" << endl;

	cout << "Виводим числа от 0: " << endl;
	for (int counter = 0; counter < 10; counter++)
	{
		cout << " " << counter;
	}
	cout << endl;

	cout << "Виводим числа от 1: " << endl;
	for (int countter = 1; countter <= 10; countter++)
	{
		cout << " " << countter;
	}
	cout << endl;

	cout << "Виводим числа от 10 до 1: " << endl;
	for (int counterAgo = 10; counterAgo > 0; counterAgo--)
	{
		cout << " " << counterAgo;
	}
	cout << endl;

	cout << "Виводим числа через два: " << endl;
	for (int countterAgo = 10; countterAgo > 0; countterAgo -= 2)
	{
		cout << " " << countterAgo;
	}
	cout << endl << endl;

	cout << "Цикл for() з перевіркою if(): " << endl;

	cout << "Виводим число 0 ділене на 5: " << endl;
	for (int counterBefore = 0; counterBefore < 10; counterBefore++)
	{
		cout << " " << counterBefore;
		if (counterBefore % 5 == 0)
			break;
	}
	cout << endl;

	cout << "Виводим число 1 ділене на 5 " << endl;
	for (int countterBefore = 1; countterBefore < 10; countterBefore++)
	{
		cout << " " << countterBefore;
		if (countterBefore % 5 == 0)
			break;
	}
	cout << endl;

	cout << "Виводим число с допомогою continue: " << endl;
	for (int countterBefore = 1; countterBefore < 10; countterBefore++)
	{
		cout << " " << countterBefore;
		if (countterBefore % 5 == 0)
			continue;
	}
	cout << endl << endl;

	cout << "Цикл while():" << endl;
	int i = 0, a = 20;

	cout << "Виводим числа от 0 до 19: " << endl;
	while (i < 20)
	{
		cout << " " << i;
		i++;
	}
	cout << endl;

	cout << "Множем 3 раза: " << endl;
	while (a > 0)
	{
		cout << " " << a;
		a /= 3;
	}
	cout << endl << endl;

	cout << "Цикл do{}while(): " << endl;
	int x = 0;

	do
	{
		cout << "Спрацьовує один раз: " << " " << x;
		x++;
	} while (x < 0);
	cout << endl << endl;

	return 0;
}