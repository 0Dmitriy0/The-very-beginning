#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	//* Number starts at 0.
	//!int arr[] = {3, 7, 5 };
	//! cout << arr[0];
	//* Change the number 5 to 34.
	//!arr[2] = 34;

	cout << "Одно мерний масив:\n";
	int arr[3] = {27, 32, 41};

	for (int i = 0; i < 3; i++)
	{
		cout << "=> " << arr[i] << endl; 
	}
	cout << endl;

	cout << "Двох мерний масив:" << endl;
	int Arr[3][2] = {{9, 6}, {1, 2}, {5, 7}};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++){
			cout << " " << Arr[i][j];
		}
		cout << endl;
	}

	cout << "Трьох мерний масив:" << endl;
	int ARR[3][3][3] = {{{1, 42, 8,}, {2, 33, 7,}, {19, 0, 12}}};

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int x = 0; x < 3; x++){
				cout << " " << ARR[i][j][x];
			}
		cout << endl;
		}
	}

	system("pause");
	return 0;
}
