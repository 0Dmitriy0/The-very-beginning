#include <iostream>

using namespace std;

int value = 15;//! This is a global change.

void func();

int main(int argc, char const *argv[])
{
	int value = 10;//! This is a local change.
	cout << value << endl;
	func();

	return 0;
}

void func(){
	cout << value << endl;
}