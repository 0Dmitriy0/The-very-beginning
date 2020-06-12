#include <iostream>

using namespace std;

void funct (int num){
	cout << "Paremetr -> " << num << endl;
}

float sum(float x, float y){
	float result;
	result = x + y;
	return result;
}

int main(int argc, char const *argv[])
{
	int num = 234;
	funct(num);

	cout << sum(23.23, 54.1) << endl;

	return 0;
}
