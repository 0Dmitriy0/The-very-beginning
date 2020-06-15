#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
	int a = 5, b = 2, c;

	cout << "Сложений оператор:" << endl;
	c = a + b;
	cout << c << endl << endl;

	cout << "Вычитаний оператор:" << endl;
	c = a - b;
	cout << c << endl << endl;

	
	cout << "Умножений оператор:" << endl;
	c = a * b;
	cout << c << endl << endl;

	cout << "Делений оператор:" << endl;
	c = a / b;
	cout << c << endl << endl;

	cout << "Делений по модулю  оператор:" << endl;
	c = a % b;
	cout << c << endl << endl;

	//! Вы можете создать такой способ с прериотетами!
	int x;

	//! Здесь приоритет 2 * 2.
	x = 2 + 2 * 2;
	cout << x << endl << endl;

	//! Здесь приоритет в (2 + 2).
	x = (2 + 2) * 2;
	cout << x << endl << endl;

	return 0;
}
