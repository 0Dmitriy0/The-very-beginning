//! Project executor DDC.

#include <iostream>

using namespace std;

struct Date
{
	int Year, Years;
};

struct Tree
{
	int Height, Width;
	float Leaf;

	Date grew;
};

int main(int argc, char const *argv[])
{
	Tree Oak;
	Oak.Height = 5;
	Oak.Width = 3;
	Oak.Leaf = 15000;
	Oak.grew.Year = 1987;
	Oak.grew.Years = 33;

	Tree Birch = {4, 2, 11000, 1999, 21};

	Tree Pine = {4, 1, 8000, 1980, 30};

	Tree Beech = {3, 2, 10000, 1995, 25};

	cout << "Oak Height => " << Oak.Height << "\n"
		  << "Birch Height => " << Birch.Height << "\n" << "Pine Height => " << Pine.Height 
		  << "\n" << "Beech Height => " << Beech.Height << endl << endl;
	cout << "Oak Width => " << Oak.Width << "\n"
		  << "Birch Width => " << Birch.Width << "\n" << "Pine Width => " << Pine.Width 
		  << "\n" << "Beech Width => " << Beech.Width << endl << endl;
	cout << "Oak Leaf => " << Oak.Leaf << "\n"
		  << "Birch Leaf => " << Birch.Leaf << "\n" << "Pine Leaf => " << Pine.Leaf 
		  << "\n" << "Beech Leaf => " << Beech.Leaf << endl << endl;
	cout << "Oak Year => " << Oak.grew.Year << "\n"
		  << "Birch Year => " << Birch.grew.Year << "\n" << "Pine Year => " << Pine.grew.Year
		  << "\n" << "Beech Year => " << Beech.grew.Year << endl << endl;
	cout << "Oak Years => " << Oak.grew.Years << "\n"
		  << "Birch Years => " << Birch.grew.Years << "\n" << "Pine Years => " << Pine.grew.Years
		  << "\n" << "Beech Years => " << Beech.grew.Years << endl << endl;

	return 0;
}
