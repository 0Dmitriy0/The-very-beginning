#include <iostream>

using namespace std;

struct Date
{
	int year;
};

struct Auto{
	int wheels;
	float speed;
	char color;

	Date create;
};

int main(int argc, char const *argv[])
{
	Auto BMW;
	BMW.color = 'Black';
	BMW.speed = 315;
	BMW.wheels = 4;
	BMW.create.year = 2020;

	Auto Mersedes = {4, 320, 'Grean', 2020};
	cout << "Mersedes-Bens speed => " << Mersedes.speed << "\n"
		  << "BMW speed => " << BMW.speed << endl << endl;
	cout << "Mersedes-Bens color => " << Mersedes.color << "\n"
		  << "BMW color => " << BMW.color << endl << endl;
	cout << "Mersedes-Bens wheels => " << Mersedes.wheels << "\n"
		  << "BMW wheels => " << BMW.wheels << endl << endl;
	cout << "Mersedes-Bens create => " << Mersedes.create.year << "\n"
		  << "BMW create => " << BMW.create.year << endl << endl;

	return 0;
}