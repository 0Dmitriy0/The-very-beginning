#include <iostream>
using namespace std;

float perimetr(float x, float y, float z);
float perimetr(float x, float y, float z, float d);

int main(int argc, char const *argv[])
{
	cout << perimetr(12.23, 23.1, 12.2) << endl;
	cout << perimetr(12.23, 23.1, 12.2, 23.2);

	return 0;
}

float perimetr(float x, float y, float z){
	return x + y + z;
}

float perimetr(float x, float y, float z, float d){
	return x + y + z + d;
}