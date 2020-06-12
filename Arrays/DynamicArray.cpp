//! Project executor DDC.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int *ptrNum = new int (7); //! Variable array for object int.
	//! *ptrNum = 7; You can do this.

	cout << *ptrNum << endl;
	delete ptrNum;//! We’ll delete the address of the cell. (Therefore, we do not put *).

	float *ptrArray = new float[10]; //! Dynamic array for float;
	
	for (int i = 0; i < 10; i++){
		ptrArray[i] = rand() % 80 + 1;
	}
	for (int i = 0; i < 10; i++)	{
		cout << ptrArray[i] << endl;
	}

	delete [] ptrArray;

	return 0;
}
