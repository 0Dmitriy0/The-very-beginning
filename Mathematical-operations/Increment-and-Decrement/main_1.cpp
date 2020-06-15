#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

	cout << "Ввыводим Икремент: " << endl;
	int a = 1;
	cout << a << endl;

	a = a + 5;
	cout << a << endl;

	a++;
	cout << a << endl << endl;

	cout << "Ввыводим Декрамент: " << endl;
	int v = 1;
	cout << v << endl;

	v = v + 5;
	cout << v << endl;

	v--;
	cout << v << endl << endl;

	cout << "Ввиводим префексну формулу Инкремента: " << endl;
	int x = 1;
	cout << x << endl;

	cout << ++x << endl << endl;

	cout << "Ввиводим префексну формулу Декрамента: " << endl;
	int y = 1;
	cout << y << endl;

	cout << --y << endl << endl;

	cout << "Ввиводим перемены: " << endl;
	int o = 1, p;
	p = ++o * o;

	cout << p << endl;
	cout << o << endl << endl;



	return 0;
}
