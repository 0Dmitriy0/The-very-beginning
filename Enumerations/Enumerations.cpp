//! Project executor DDC.

#include <iostream>

using namespace std;

enum Mall {Parking = -1, Hall, Many_Shops, Roof};

//! I am implementing an elevator to move Enumerations
int main(int argc, char const *argv[])
{
	int floor;
	bool exit = false;

	while (exit = false){
		cout << "Enter your floor (From -1 to 2): ";
		cin >> floor;
		switch (floor)
		{
		case Parking:
			cout << "We on the -1 floot in the Parking." << endl;
			break;
		case Hall:
			cout << "We on the 1 floot in the Hall." << endl;
			break;
		case Many_Shops:
			cout << "We on the 2 floot in the Many_Shops." << endl;
			break;
		case Roof:
			cout << "We on the 3 floot in the Roof." << endl;
			break;
		default:
			cout << "Froors only from -1 to 2" << endl;
		}
		cout << "If you want to play again press 0 or press 1 to EXIT this game" << endl;
		cin >> exit;
	}

	return 0;
}
