/*
 *	\b	 Удаления последнього вивединого символаю
 *	\n	 Перейти на начало новой строки.
 *	\t  Перейти к следуйший позициї табуляциї.
 *
 *	.............................................
 *
 *	\\ Вивести обратную черту \
 * \" Вывести двойную кавычки "
 * \' Вывести одну кавычки '
 */

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//! << endl Добавляют для красивой виализации в консоле.
	cout << "Hello World!\b" << endl;
	cout << "Hello World!\n" << endl;
	cout << "\tHello World!" << endl;
	cout << "Hello \tWorld!" << endl;
	

	return 0;
}
