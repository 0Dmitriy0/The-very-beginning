//! Project executor DDC.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num1;
	int num2;

	cout << "Enter num1 -> ";
	cin >> num1;
	cout << "Enter num2 -> ";
	cin >> num2;

	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 / num2 = ";

	try//! We check or divide the number by 0; If we divide, it looks like an error
	{
		if (num2 == 0)
			throw 123;
		cout << num1 / num2 << endl;
	}
	catch(int i)
	{
		cout << "Eror % " << i << " - Divide by 0!!!" << endl;
	}

	return 0;
}
